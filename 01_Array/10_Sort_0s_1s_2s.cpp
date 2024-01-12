#include <iostream>
using namespace std;

void sort012(int *arr, int n)
{
    //   Write your code here
    int start = 0;
    int mid = 0;
    int end = n-1;

    while(mid <= end ){
        if(arr[mid] == 0){
            swap(arr[mid] , arr[start]);
            start++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[end] , arr[mid]);
            end--;
        }
    }
}


void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    int arr[6] = {0, 1, 2, 2, 1, 0};

    sort012(arr,6);
    printArray(arr , 6);
    return 0;
}