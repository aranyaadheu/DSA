#include <stdio.h>

int linear_search(int A[], int n, int x){
    int i;
    
    for(i = 0; i < n; i++){
        if(A[i] == x){
            return i;
        }
    }
    
    i = -1;

    return i;
}

int main()
{
    int arr[] = {10, 23, 45, 70, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 70;

    int result_index = linear_search(arr, n, target);

    if(result_index != -1){
        printf("Element %d found at index %d.\n", target, result_index);
    } else{
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}