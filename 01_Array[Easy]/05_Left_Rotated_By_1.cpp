#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int> &nums)
{
    int temp = nums[0];
    int n = nums.size();
    for(int i = 1; i<n; i++){
        nums[i-1] = nums[i];
    }
    nums[n- 1] = temp;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    rotate(arr);

    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}