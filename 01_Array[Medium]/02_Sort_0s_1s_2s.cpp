#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



//brute force :
// simpling a sort a array : - O(N*logN) 


//brute froce :-- O(N) + O(N)
// int cnt0= 0, cnt1 = 0, cnt2 = 0;
// for(int i = 0; i<n; i+=){
//     if(arr[i] == 0) cnt0++;
//     else if(arr[i] == 1) cnt1++;
//     else cnt2++;
// }
// for(int i = 0; i<cnt0; i++) arr[i] = 0;
// for(int i = cnt0; i<cnt0 + cnt1; i++) arr[i] = 1;
// for(int i = cnt0 + cnt1; i<n; i++) arr[i] = 2;


// optimal : - O(N)
void sort_0_1_2(vector<int>& arr , int n)
{
    int start = 0;
    int mid = 0;
    int end = n-1;

    while(mid < end){
        if(arr[mid] == 0){
            swap(arr[start] , arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[mid] , arr[end]);
            end--;
        }
    }
}


int main()
{
    vector<int> arr = {2,0,2,1,1,0} ;
    int n = 6;
    sort_0_1_2(arr , n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }    
    
    return 0;
}