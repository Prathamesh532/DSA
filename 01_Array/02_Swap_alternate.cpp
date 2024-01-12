#include <iostream>
using namespace std;

void swapAlternate(int arr[] , int size){

    for(int i = 0; i<=size; i+=2){
        if(i+1 < size){
        swap(arr[i] , arr[i+1]);
        }
    }

}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    /* code */

    int arr[7] = {1,2,3,4,5,6,7};

    cout << "before Swaping" <<  endl;
    printArray(arr , 7);

    swapAlternate( arr , 7);

    cout << "After Swaping" << endl;
    printArray(arr , 7);

    cout << endl;

    return 0;
}
