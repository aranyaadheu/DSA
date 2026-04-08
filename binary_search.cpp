#include <stdio.h>

int binary_search(int A[], int n, int x){
    int left, right, mid;
    left = 0;
    right = n - 1;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(A[mid] == x){
            return mid; // Target found
        }
        if(A[mid] < x){
            left = mid + 1; // search right half
        } else{
            left = mid - 1; // search left half
        }
    }
    return -1; // element not found!
}

int main(){

    int arr[] = {2, 11, 15, 23, 25, 70, 98};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 70;

    int result_index = binary_search(arr, n, target);

    if(result_index != -1){
        printf("Element %d found at index %d.\n", target, result_index);
    } else{
        printf("Element %d not found in the array.\n", target);
    }


    return 0;
}