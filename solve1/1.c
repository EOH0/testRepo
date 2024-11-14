#include <stdio.h>

int main() {
    int i = 3000;
    int *a = &i;
    
    printf("%d\n", i);
    printf("%d\n", &i);

    printf("%d\n", *a);
    printf("%d\n", &a);
}