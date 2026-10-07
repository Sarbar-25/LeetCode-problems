#include <iostream>
using namespace std;

int Missing_value(int arr[],int n) {
    
    int Original_Sum = 0;
    int Expected_Sum = (n*(n+1))/2;

    for(int i = 0; i < n; i++) {
        Original_Sum += arr[i];
    }

    int result = Expected_Sum-Original_Sum;
}

int main() {

    int arr[] = {1,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << Missing_value(arr,n);
}