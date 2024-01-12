#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


int getLongestSubarray(vector<int>& nums, int k){
    map<long long , int > preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i<nums.size(); i++){
        sum += nums[i];
        if(sum == k){
            maxLen = max(maxLen , i+1);
        }

        long long rem = sum - k;

        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen , len);
        }

        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum]  = i;
        }

    }
    return maxLen;

}

int main()
{
    vector<int> a = {2, 3 ,5};
    int k = 5;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}