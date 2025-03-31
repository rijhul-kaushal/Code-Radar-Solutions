#include <stdio.h>

void isPeak(int arr[], int x) {
    for (int i = 0; i < x; i++) {
        if (i == 0) {  
            // First element: Compare with next element only
            if (arr[i] > arr[i + 1]) {
                printf("%d ", arr[i]);
            }
        } 
        else if (i == x - 1) {  
            // Last element: Compare with previous element only
            if (arr[i] > arr[i - 1]) {
                printf("%d ", arr[i]);
            }
        } 
        else {  
            // Middle elements: Compare with both neighbors
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                printf("%d ", arr[i]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];  // ✅ Correct array declaration
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // ✅ Correct input
    }

    isPeak(arr, n);  // ✅ Function call
    return 0;
}
