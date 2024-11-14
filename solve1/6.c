#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int num1, num2;
    printf("num1: ");
    scanf("%d", &num1);
    printf("num2: ");
    scanf("%d", &num2);

    printf("num1은 %d입니다.\nnum2는 %d입니다.\n", num1, num2);
    
    swap(&num1, &num2);
    printf("swap 완료\n");

    printf("num1은 %d입니다.\nnum2는 %d입니다.\n", num1, num2);
}