#include <stdio.h>
int main() {
    int n, m;
    printf("Nhap so dong n va so cot m: ");
    scanf("%d%d", &n, &m);
    int a[n][m];
    printf("Nhap gia tri phan tu mang:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int temp;
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n-1; i++) {
            for(int k = i+1; k < n; k++) {
                if(a[i][j] > a[k][j]) {
                    temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
            }
        }
    }
    
    printf("Mang sau khi sap xep:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

