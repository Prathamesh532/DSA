#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxi =  0;
    int count = 0;

    for(int i = 0; i<nums.size(); i++){
        if(nums[i] == 1){
            count++;
            maxi = max(maxi , count);
        }
        else{
            count = 0;
        }
    }

    return maxi;
}

int main()
{
    vector<int> arr ={1,1,0,1,0,1};
    cout <<  findMaxConsecutiveOnes(arr) ;
    return 0;
}