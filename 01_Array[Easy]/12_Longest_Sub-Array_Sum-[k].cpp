#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestSubArr(int arr[], int n,  int k)
{
   
    // int len = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += arr[j];
    //         if (sum == k)
    //         {
    //             len = max(len, j - i + 1);
    //         }
    //     }
    // }

    // return len;

    int right = 0 , left  = 0;
    int sum = arr[0];
    int maxLen = 0;

    while(right < n){

        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        
        if(sum == k) maxLen = max(maxLen , right - left + 1);

        right++;
        if(right < n) sum += arr[right];

    }

    return maxLen;

}

int main()
{
    int a[7] = {1,2,3,1,1,1,1};
    int k = 3;
     int n = sizeof(a) / sizeof(a[0]);
    int len = longestSubArr(a,n, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}