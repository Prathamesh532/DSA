#include<bits/stdc++.h>
using namespace std;

//brute force : -- ~ O(N^2)
// int maxProfit(vector<int> &arr)
// {
//     int maxi = INT_MIN;
//     for(int i = 0; i<arr.size(); i++){
//         for(int j = i+1; j<arr.size(); j++){
//             if(arr[j] > arr[i]){
//                 maxi = max(maxi , arr[j] - arr[i]);
//             }
//         }
//     }
//     return maxi;
// }


//optimal solution : O(N)
int maxProfit(vector<int> &arr)
{
    int minSoFar = INT_MAX;
    int maxi = INT_MIN;
    
    for(int i = 0; i<arr.size(); i++){
        minSoFar = min(minSoFar , arr[i]);
        maxi = max(maxi , arr[i] - minSoFar);
    }

    return maxi;
}


int main()
{
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}