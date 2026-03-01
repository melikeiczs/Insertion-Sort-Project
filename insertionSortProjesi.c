#include <stdio.h>

// Diziyi yazdıran yardımcı fonksiyon
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Insertion Sort algoritması
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Elemanı doğru konuma yerleştirme
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;

        // Her adımı yazdır
        printf("Aşama %d: ", i);
        printArray(arr, size);
    }
}

// Selection Sort algoritmasının ilk 4 adımını yazdıran fonksiyon
void selectionSortSteps(int arr[], int size) {
    for (int i = 0; i < 4; i++) { // İlk 4 adım için döngü
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Minimum elemanı yer değiştir
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

        // Her adımı yazdır
        printf("Aşama %d: ", i + 1);
        for (int k = 0; k < size; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {22, 27, 16, 2, 18, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Başlangıç dizisi: ");
    printArray(arr, size);

    // Insertion Sort'u çalıştır
    insertionSort(arr, size);

    printf("\nSıralı dizi: ");
    printArray(arr, size);

    // Big-O gösterimi
    printf("\nBig-O Gösterimi: O(n^2)\n");

    // Time Complexity analizi
    printf("\nTime Complexity:\n");
    printf("18 sayısı Average Case kapsamına girer çünkü dizinin ortasında yer alır.\n");

    // Selection Sort için örnek dizi
    int selectionArr[] = {7, 3, 5, 8, 2, 9, 4, 15, 6};
    int selectionSize = sizeof(selectionArr) / sizeof(selectionArr[0]);

    printf("\nSelection Sort İlk 4 Adım:\n");
    selectionSortSteps(selectionArr, selectionSize);

    return 0;
}



