#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    // Write your code here
    int xorr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xorr ^= arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        xorr ^= i;
    }

    return xorr;
}

int main()
{
    // vector<int> arr = {4 , 2 , 1 , 3 , 1};
    vector<int> arr = {6, 3, 1, 5, 4, 3, 2};

    cout << findDuplicate(arr) << endl;

    return 0;
}