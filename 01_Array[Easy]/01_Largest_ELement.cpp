#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestElemnet(int arr[] , int size){

    int max = arr[0];

    for(int i=0; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;

}

int main(){

    int arr[5] = {2,5,1,3,0};

    cout << "The Largesr Element is: " ;
    cout << largestElemnet(arr , 5);

    return 0;
}
