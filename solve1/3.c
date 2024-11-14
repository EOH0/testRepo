#include <stdio.h>

int main() {
    int i = 10;
    int *x = &i;

    printf("%d\n", *x);

    *x = 20;

    printf("%d", *x);
}