#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int> &nums, int d)
{
    // vector<int> temp;
    int n =  nums.size();
    
    // for(int i = 0; i<d; i++){
    //     temp.push_back(nums[i]);
    // }

    // for(int i = d; i<n; i++){
    //     nums[i-d] = nums[i];
    // }

    // for(int i = n-d; i<n; i++){
    //     nums[i] = temp[i-(n-d)];
    // }

    reverse(nums.begin() , nums.begin() + d);
    reverse(nums.begin() + d , nums.end());
    reverse(nums.begin() , nums.end());

}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    rotate(arr,3);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}