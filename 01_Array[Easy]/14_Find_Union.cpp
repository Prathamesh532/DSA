#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> FindUnion(int a[] , int b[] , int n, int m)
{

    int i = 0, j = 0;
    vector<int> Union;

    while (i < n && i < m)
    {
        if (a[i] <= b[j])
        {
            if (Union.size() == 0 || Union.back() != a[i])
            {
                Union.push_back(a[i]);
            }
                i++;
        }
        else
        {
            if(Union.size() == 0 || Union.back() != b[j])
            {
                Union.push_back(b[j]);
            }
                j++;
        }
    }

    while (i < n)
    {
        if (Union.back() != a[i])
        {
            Union.push_back(a[i]);
        }
            i++;
    }

    while (j < m)
    {
        if (Union.back() != b[i])
        {
            Union.push_back(b[i]);
        }
            j++;
    }
    return Union;
}

int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[7] = {2, 3, 4, 4, 5, 11, 12};

    vector<int> Union = FindUnion(arr1 ,arr2 , 10 , 7);
    cout << "The Union is : "  << endl ;

    for(auto & it: Union){
        cout  << it << " " ;
    }  

    return 0;
}