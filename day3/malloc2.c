// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	int *n = malloc(4);

//     // heap에 4바이트 만큼의 공간이 할당되었다 
//     // -> 그 메모리 주소를 우리가 알고 있다.
//     // -> int *n에 그 주소를 저장함으로써 알고 있다
//     // 어떤 메모리의 주소를 알고, 얼마만큼의 크기를 사용해야하는지를 알면
    
//     *n = 10;
//     printf("%d", *n);
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
    scanf("%d", &n);

    int *intPointer = malloc(sizeof(int) * n);
    // int* intPointer = (int *)malloc(40);

    intPointer[0] = 1;

    printf("%p", intPointer[0]); // 배열처럼 포인터를 사용 가능
}