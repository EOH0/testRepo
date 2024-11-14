#include <stdio.h>

int func1(int a) {
    a = 10;
    return a;
} 
int func2(int a) {
    a = 0;
    return a;
}

int main() {
   int a = 5;
   
   printf("a: %d\n", a); // a: 5
   a = func1(a);
   printf("a: %d\n", a); // a: 10
   a = func2(a);
   printf("a: %d\n", a); // a: 0

   return 0;
}

