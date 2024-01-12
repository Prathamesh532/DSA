#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//brute force : O(N^2) not extecly 
// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     for(int i = 0; i<n; i++){
//         int cnt = 0;
//         for(int j = 0; j<n; j++){
//             if(nums[j] == nums[i]) cnt++;
//         }

//         if(cnt > (n/2)) return nums[i];
//     }
//     return -1;
// }

//better : --- O(N*logN) + O(N)
// int majorityElement(vector<int> &arr)
// {
//     int n = arr.size();
//     map<int, int> mpp;

//     for(int i = 0; i<n; i++){
//        mpp[arr[i]]++;
//     }

//     for(auto it: mpp){
//         if(it.second > (n/2) ) {
//             return it.first;
//         }
//     }
    
//     return -1;
// }

//optimal (Moore’s Voting Algorithm:) : --- 0(N) + O(N)
int majorityElement(vector<int> &arr)
{
    int n = arr.size();
    int cnt = 0;
    int el;

    //algo Moore’s Voting Algorithm:
    for(int i = 0; i<n; i++){
        if(cnt == 0){
            cnt = 1;
            el = arr[i];
        }
        else if (el == arr[i]) cnt++;
        else cnt--;
    }

    //checking element occures > n/2 
    int cnt1 = 0;
    for(int i = 0; i<n; i++){
        if(el == arr[i]) cnt1++;
    }

    if(cnt1 > (n/2)) return el;
    
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    std::cout << ans << std::endl;
    return 0;
}