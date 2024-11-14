#include <stdio.h>

int main() {
    int n;

    printf("숫자를 입력하세요: ");
    scanf("%d", &n);

    int a = n;
    int *x = &a;

    printf("변수 a의 값: %d\n", a);
    printf("포인터 변수가 가리키는 변수의 값: %d\n", *x);
    printf("변수 a의 주소: %d\n", a);
    printf("포인터 변수의 주소: %d\n", &x);
    printf("포인터 변수의 값: %d\n", x);
}