#include <stdio.h>

int subtractingSearch(int arr[], int n, int key) {
    int pos = n - 1;   // start from last element

    while (pos >= 0 && arr[pos] > key) {
        pos -= (arr[pos] - key);   // subtract difference
    }

    if (pos >= 0 && arr[pos] == key) {
        return pos;  // element found
    }
    return -1; // not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = subtractingSearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found\n", key);
    }

    return 0;
}
