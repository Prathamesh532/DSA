#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if(element < arr2[j]) break;

            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }

    return ans;
}

int main()
{

    vector<int> arr1 ={1, 2, 3};
    vector<int> arr2 = {3, 4};

    vector<int> answer = findArrayIntersection(arr1, 6, arr2, 4);

    cout << "Intersection is : " << endl;

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0;
}