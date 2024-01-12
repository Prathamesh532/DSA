#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//brute force : -- take 3 loop :_ O(n^3);

//better solution : -- take 2 loop :- O(N^2);l
// void maxSubarraySum(int arr[], int n) 
// {
//     int endIndex = 0 , startIndex = 0;
//     int maxi = -1;

//     for(int i =0; i<n; i++){
//         int sum = 0;
//         for(int j = i; j<n; j++){
//             sum += arr[j];
//             if(sum > maxi){
//                 maxi = sum;
//                 startIndex = i;
//                 endIndex = j;
//             }
//         }
//     }
//     for(int i = startIndex; i<=endIndex; i++){
//         cout << arr[i] <<  " " ;
//     } cout << endl;
// }


//optimal solution :- Using KADAN'S Algothrim :-- O(N)
void maxSubarraySum(int arr[], int n) 
{
    int maxi = -1;
    int start =  0;
    int startIndex = -1, endIndex = -1;
    int sum =0;

    for(int i = 0; i<n; i++){

        if(sum == 0) start = i;  // this has come first 

        sum += arr[i];


        if(sum > maxi){
            maxi = sum;
            startIndex = start;
            endIndex = i;
        }

        if(sum < 0) sum = 0;
    }

    for(int i=startIndex; i<=endIndex; i++){
        cout << arr[i] << " ";
    } cout << endl;
}



int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxSubarraySum(arr, n);
    
    return 0;
}