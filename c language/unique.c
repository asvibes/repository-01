#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique[n];
    int uniqueCount = 0;

    // Find unique elements
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    // Print unique elements
    printf("Unique elements: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
