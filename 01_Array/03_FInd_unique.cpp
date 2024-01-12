#include <iostream>
using namespace std;


int findUnique(int *arr, int size)
{
    //Write your code here
    int xorr = 0 ;
    for(int i = 0; i<size; i++){
        xorr ^= arr[i];
    }

    return xorr;
}


// printing Array function
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int arr[7] = {2 , 3 , 1 , 6 , 3 , 6 , 2};
    int arr[7] = {2 , 4 , 7 , 2 , 7};

    printArray(arr , 7);
    cout << findUnique(arr , 7) << endl;


    return 0;
}