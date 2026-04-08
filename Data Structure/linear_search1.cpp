#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int item){
    for(int i = 0; i < n; i++){
        if(arr[i] == item){
            return i;
        }
    }
    return -1; // element not found. 
}

int main()
{
    int arr[] = {22, 11, 14, -2, 17, 18, 13, 34, 93, 88};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item = 13;

    int loc = linear_search(arr, n, item);

    if(loc == -1){
        cout << "Element not found!" << endl;
    } else{
        cout << "Element found at loc: " << loc << endl;
    }

    return 0;
}