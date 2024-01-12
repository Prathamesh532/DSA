#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findAllDuplicate(vector<int> &arr)
{
    vector<int> ans;
    sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            ans.push_back(arr[i]);
        }
    }

    return ans;
}

int main()
{
    // vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> arr = {1,1,2};

    vector<int> duplicate = findAllDuplicate(arr);

    cout << "The Duplicates are: " << endl;

    for (int i = 0; i < duplicate.size(); i++)
    {
        cout << duplicate[i] << " ";
    }
    cout << endl;

    return 0;
}