#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int getMax(int arr[] , int size){
    int maxi = INT_MIN;
    for(int i = 0; i<size; i++){
        maxi = max(arr[i] , maxi);
    }
    return maxi;
}

int getMin(int arr[] , int size){
    int mini = INT_MAX;
    for(int i = 0; i<size; i++){
        mini = min(arr[i] , mini);
    }
    return mini;
}

int main() {
    int arr[3] = {1, 2, 3};
    printArray(arr, 3);
    cout << endl ;
    cout << "maximum is: " <<  getMax(arr , 3) << endl ;
    cout << "Minimum is: " <<  getMin(arr , 3) << endl ;
    return 0;
}
