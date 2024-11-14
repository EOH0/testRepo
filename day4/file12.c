#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _fruit fruit_t;

struct _fruit {
    char name[20];
    int price;
};

int compare(const void *x, const void *y) {
    fruit_t *a = (fruit_t *)x;
    fruit_t *b = (fruit_t *)y;
    if (a->price != b->price) {
        return b->price - a->price;
    } else {
        return strcmp(a->name, b->name);
    }
}
void read_fruits(FILE *fp, int *n, fruit_t **fruits) { // input 파일에서 생성한 n의 주소를 받아옴
    fread(n, sizeof(int), 1, fp);
    *fruits = (fruit_t *)malloc(*n * sizeof(fruit_t));
    fread(*fruits, sizeof(fruit_t), *n, fp);
}
void write_fruits(FILE *fp, int n, fruit_t *fruits) {
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d\n", fruits[i].name, fruits[i].price);
    }
}
// size_t fread(void* ptr, size_t size, size_t count, FILE* stream);
//  void* ptr => scanf()에서 어디에 저장할 것인지
//  size_t size는 읽을 비트 사이즈가 몇인지
//  size_t count는 해당 비트 사이즈 만큼 몇번 읽을 것인지
//  FILE *stream은 파일 포인터 주소
// size_t fwrite(const void* ptr, size_t size, size_t count, FILE* stream);
// scanf / fscanf -> f는 format specifier -> 지정, 파일 포인터로부터 그 포맷에 대한 바이트만큼만 읽어올 수 있음
//  fread -> scanf를 안써서 format specifier가 없음 -> 직접 포맷에 대한 바이트를 지정해줘야됨

int main()
{
    int n; fruit_t *fruits;
    FILE* fp = fopen("input.bin", "rb");
    char temp[20];

    fread(&n, sizeof(int), 1, fp);
    printf("%d\n", n);

    fruit_t *arr = malloc(sizeof(fruit_t) * 10); // fread로 불러올 배열의 메모리를 미리 할당

    fread(arr, sizeof(fruit_t), 10, fp);

    for (int i = 0; i < 10; i++) {
        printf("%s, %d\n", arr[i].name, arr[i].price);
    }
    // fwrite(fruits, sizeof(fruit_t), 10, fout);
    // read_fruits(fp, &n, &fruits);
    // qsort(fruits, n, sizeof(fruit_t), compare);
    // write_fruits(fp, n, fruits);
}
