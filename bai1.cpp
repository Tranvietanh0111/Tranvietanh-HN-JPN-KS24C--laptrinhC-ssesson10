#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]); 
    int n, co = 0;
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &n);
    for (int i = 0; i < size; i++) {
        if (array[i] == n) {
            printf("Phan tu %d ton tai o vi tri thu: %d\n", n, i+1);
            co = 1; 
        }
    }
    if (co==0) {
        printf("Phan tu khong ton tai trong mang\n" );
    }

    return 0;
}

