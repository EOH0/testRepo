#include <stdio.h>

typedef struct _node node_t;

struct _node{
    int data;
    node_t* link;
};

int main() {
    struct _node n1; // node_t n1;
    node_t n2;
    node_t n3;
    node_t n4;
    node_t n5;

    n1.data = 0;
    n1.link = &n2;

    n2.data = 1;
    n2.link = &n3;

    n3.data = 2;
    n3.link = &n4;

    n4.data = 3;
    n4.link = &n5;

    n5.data = 4;
}