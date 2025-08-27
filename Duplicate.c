#include <stdio.h>

void printDuplicates(int arr[], int n) {
    printf("Duplicate elements: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate) continue;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found) printf("None");
}

int main() {
    int arr[] = {4, 2, 7, 4, 2, 8, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printDuplicates(arr, n);
    return 0;
}