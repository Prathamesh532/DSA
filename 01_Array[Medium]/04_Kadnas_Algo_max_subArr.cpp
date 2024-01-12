#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//brute force : -- O(N^3);
// int maxSubarraySum(int arr[], int n) 
// {
//     int maxi = -1;
//     for(int i = 0; i<n; i++){
//         for(int j = i; j<n; j++){
//             int sum = 0;
//             for(int k = i; k<=j; k++){
//                 sum += arr[k];
//             }
//             maxi = max(maxi,sum);
//         }
//     }
//     return maxi;
// }

//better : -- O(n^2)
// int maxSubarraySum(int arr[], int n) 
// {
//     int maxi = -1;
//     for(int i = 0; i<n; i++){
//         int sum = 0;
//         for(int j = i; j<n; j++){
//             sum += arr[j];
//             maxi = max(maxi,sum);
//         }
//     }
//     return maxi;
// }


//optimal Soultion : KADANE'S ALGO :-  O(N) 
int maxSubarraySum(int arr[], int n) 
{
    int max_so_far = 0;
    int max_ending_here = INT_MIN;

    for(int i = 0; i<n; i++){
        max_so_far += arr[i];
        if(max_so_far > max_ending_here){
            max_ending_here = max_so_far;
            
        }
        if(max_so_far < 0){
            max_so_far = 0;
        }
    }
    return  max_ending_here;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}