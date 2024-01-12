#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findOnce(int arr[], int n)
{
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {
        xorr ^= arr[i];
    }
    return xorr;
}


int findOnce(int arr[], int n)
{
    unordered_map<int, int> hash;

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    return xorr;
}



int main()
{
    int arr[5] = {4,1,2,1,2};
    cout << findOnce(arr, 5);
    return 0;
}