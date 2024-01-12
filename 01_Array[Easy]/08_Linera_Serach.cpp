#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LinearSearch(int arr[] , int n , int num){
    for(int i =0; i<n; i++){
        if(arr[i] == num){
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << LinearSearch(arr , 5 , 3) << endl;
    return 0;
}