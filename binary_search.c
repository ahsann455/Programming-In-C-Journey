#include <stdio.h>


int binary_search(const int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;  
        
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    return -1; 
}

int main() {
    int arr[] = {0,4,7,10,14,23,45,47,53};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6;
    
    int result = binary_search(arr, size, key);
    
    if (result != -1) {
        printf("The key %d is located at index %d\n", key, result);
    } else {
        printf("Key %d not found in the array\n", key);
    }
    
    return 0;
}
