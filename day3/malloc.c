#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	
	// int *intPointer = malloc(sizeof(int) * n);
    int* intPointer = (int *)malloc(40);

    intPointer[0] = 1;

    printf("%p", intPointer[0]);
}