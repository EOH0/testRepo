#include <stdio.h>

void func1(int *x) {
    *x *= 2;
}

int main() {
    int a;
    scanf("%d", &a);

    int *x = &a;
    func1(x);
    printf("%d", *x);
}