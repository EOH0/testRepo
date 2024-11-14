#include <stdio.h>

typedef struct node {
  int data;
  struct node *link;
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
	
	node temp_node;
	temp_node = node1;
	
	printf("연결 리스트 순회를 시작합니다.\n");
	while(1) {
		printf("%d\n", temp_node.data);
		if (temp_node.link == NULL) break;
		
		temp_node.data = (*temp_node.link).data;
		temp_node.link = (*temp_node.link).link;
	}
	printf("다음 노드가 없습니다");
}