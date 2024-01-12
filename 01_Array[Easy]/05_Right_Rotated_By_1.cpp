#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int> &nums)
{
    int n = nums.size();
    int temp = nums[n-1];

    for(int i = n-1; i>0; i--){
        nums[i] = nums[i-1];
    }

    nums[0] = temp;
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