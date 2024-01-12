#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();

    //brute force : -- O(N^2)
    // vector<int> ans;
    // for(int i = 0; i<n; i++){
    //     for(int j = i+1; j<n; j++){
    //         int sum = nums[i] + nums[j];
    //         if(sum == target) {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }

    //Better Solution : using Hashing : --- o(N)  S.C - O(N)
    // unordered_map<int, int> mpp;
    // for(int i = 0; i<n; i++){
    //     int num = nums[i];
    //     int moreNeeded = target - num;
    //     if(mpp.find(moreNeeded) != mpp.end() ){
    //         return {mpp[moreNeeded] , i};
    //     }
    //     mpp[num] = i;
    // }

    //optimal : using 2 pointer : ----
   sort(nums.begin(), nums.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {left , right};
        }
        else if (sum < target) left++;
        else right--;
    }
    return {-1,-1};

}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    vector<int> ans = twoSum(arr,14);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}