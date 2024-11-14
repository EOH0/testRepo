#include <stdio.h>

int main() {
    FILE* fp1 = fopen("out.txt", "r");

    int n;

    // fscanf(fp, "%d", &n);
    int temp, temp2;

    // int flag = fscanf(fp1, "%d", &temp);
    // if (flag == 1) {
    //     printf("%d\n", temp);
    // }
    // for (int i = 0; i < n; i++) {
        // fscanf(fp, "%d", &temp);
        // fprintf(fp1, "%d ", temp); // f(ile)printf(ormat)
    // }
    while (fscanf(fp1, "%d", &temp) != EOF) {
        printf("%d\n", temp);
    }   
}