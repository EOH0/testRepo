#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* link;
} node;

int main() {
    node *list = NULL;
    
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        /* temp �ʱ�ȭ */
        node* temp = malloc(sizeof(node));
        temp->data = 0;
        temp->link = NULL;

        if (list == NULL) {
            list = temp;
        }
    }
}

/*
list��� �����Ͱ� � ��带 ����Ŵ
list->NULL; // list���� �ƹ��͵� ���� ����

list -> (malloc(node) data: 0 link = NULL);
*/