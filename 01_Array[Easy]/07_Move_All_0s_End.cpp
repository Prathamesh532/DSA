#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();

    int i = 0;

    for(int j = 0; j<n; j++){
        if(nums[j] != 0){
            swap(nums[i] , nums[j]);
            i++;
        }
    }

    
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};

    moveZeroes(arr);

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}