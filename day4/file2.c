#include <stdio.h>

int main() {
    FILE* fp = fopen("out.txt", "r");
    FILE* fp1 = fopen("out.txt", "w");

    int n;
    fscanf(fp, "%d", &n);

    int temp;
    fscanf(fp1, "%d", &temp);

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &temp);
        fprintf(fp1, "%d ", temp);
    }
}