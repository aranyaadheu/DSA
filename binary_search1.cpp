#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int item, int left, int right){
    while(left < right){
        int mid = (left + right) / 2;
        if(item == arr[mid]){
            return mid;
        } else if(item > arr[mid]){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {12, 15, 17, 20, 22, 25, 37, 58, 78, 89, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    int item = 89;

    int loc = binary_search(arr, item, 0, n-1);

    if(loc == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at loc: "<<loc<<endl;
    }

    return 0;
}