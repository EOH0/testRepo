#include <stdio.h>

typedef struct node {
    int data;
    struct node* link;
} node;

int main() {
    node node1, node2, node3, node4, node5;

    node1.data = 10;
    node1.link = &node2;

    node2.data = 20;
    node2.link = &node3;

    node3.data = 30;
    node3.link = &node4;

    node4.data = 40;
    node4.link = &node5;

    node5.data = 50;
    node5.link = NULL;

    // *node1.link
    /*
    구조체 포인터 변수인 node1.link에 포인터 연산을 취하면,
    구조체 변수 node2에 접근할 수 있게 된다.
    단, node2에 접근했다고 해서 바로 node2의 data field에 접근할 수는 없다.
    */

    // (*node1.link).data
    /*
    컴파일러는 위 표현식을 연산하여, 결국 node2.data로 해석하게 된다.
    이러한 방법을 반복함으로써 우리는 계속해서 다음 노드로 접근할 수 있다.
    */

    // 마지막 노드는 항상 link field의 값이 NULL이기 때문에,
    // 아래와 같은 논리로 연결 리스트의 첫 번째 값부터 마지막 값까지 출력해볼 수 있다.

    node temp_node;

    temp_node = node1;
    printf("연결 리스트 순회를 시작합니다.\n");
    while(temp_node.link != NULL) {
        printf("%d\n", temp_node.data);
        if(temp_node.link == NULL) break;
        temp_node = (*temp_node.link);
    }
    printf("다음 노드가 없습니다.");
    

    // temp_node의 다음 노드가 없으면 while문 종료
    // temp_node.data 출력
    // temp_node를 다음 노드로 저장하기
}