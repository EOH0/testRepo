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
        /* temp 초기화 */
        node* temp = malloc(sizeof(node));
        temp->data = 0;
        temp->link = NULL;

        if (list == NULL) {
            list = temp;
        }
    }
}

/*
list라는 포인터가 어떤 노드를 가리킴
list->NULL; // list에는 아무것도 없는 상태

list -> (malloc(node) data: 0 link = NULL);
*/