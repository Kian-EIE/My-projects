#include <stdio.h>

int linear_search(int *arr, int length, int searched) {
    int location;
    
    location = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] == searched) {
            location = i;
            break;
        }
    }
    return location;
}

int main() {
    int arr[] = {32, 34, 435, 564, 234, 666, 89, 5, 13, 45};
    printf("location = %d", linear_search(arr, sizeof(arr) / sizeof(arr[0]), 666));
    
    return 0;
}
