#include <stdio.h>

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]); 
    printf("Mang ban dau: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    printf("\nMang sau khi sap xep : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

