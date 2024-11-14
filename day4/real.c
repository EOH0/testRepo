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
void read_fruits(FILE *fp, int *n, fruit_t **fruits) {
    fread(n, sizeof(int), 1, fp);
    *fruits = (fruit_t *)malloc(*n * sizeof(fruit_t));
    fread(*fruits, sizeof(fruit_t), *n, fp);
}
void write_fruits(FILE *fp, int n, fruit_t *fruits) {
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d\n", fruits[i].name, fruits[i].price);
    }
}

int main()
{
    int n; fruit_t *fruits;
    FILE* fp = fopen("input.bin", "rb");
    if(!fp) {
        printf("fopen failed\n");
        exit(1);
    }

    char temp[20];

    fread(&n, sizeof(int), 1, fp);
    printf("%d\n", n);

    fruit_t* arr = malloc(sizeof(fruit_t) * n);

    fread(arr, sizeof(fruit_t), n, fp);

    for(int i = 0; i < n; i++) {
        printf("%s, %d\n", arr[i].name, arr[i].price);
    }
    // while(fscanf(fp, "%s", temp) != EOF) {
    //     printf("%s\n", temp);
    // }

    // read_fruits(fp, &n, &fruits);
    // qsort(fruits, n, sizeof(fruit_t), compare);
    // write_fruits(fp, n, fruits);
}
