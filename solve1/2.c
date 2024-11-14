#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int *a;

    a = &x;
    printf("%d\n", a);
    printf("%d\n", *a);

    a = &y;
    printf("%d\n", a);
    printf("%d\n", *a);
}