// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	int *n = malloc(4);

//     // heap�� 4����Ʈ ��ŭ�� ������ �Ҵ�Ǿ��� 
//     // -> �� �޸� �ּҸ� �츮�� �˰� �ִ�.
//     // -> int *n�� �� �ּҸ� ���������ν� �˰� �ִ�
//     // � �޸��� �ּҸ� �˰�, �󸶸�ŭ�� ũ�⸦ ����ؾ��ϴ����� �˸�
    
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

    printf("%p", intPointer[0]); // �迭ó�� �����͸� ��� ����
}