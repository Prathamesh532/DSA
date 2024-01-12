#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Check(int arr[] , int n){
    for(int i = 0; i<n; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }

    return true;
}

int checkRotated(int arr[] , int n){
    
}

int main(){
    int arr[5] = {1,2,3,4,5};
    // int arr[5] = {5,4,6,7,8};
    cout << Check(arr , 5) << endl;
    return 0;
}