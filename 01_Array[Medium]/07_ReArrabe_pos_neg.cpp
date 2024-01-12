#include <bits/stdc++.h>
using namespace std;

// brute force : -- O(n) + O(n/2) & S.C : -- O(n/2) + O(n/2);
// vector<int> RearrangebySign(vector<int> A, int n)
// {
//     vector<int> pos;
//     vector<int> neg;

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] < 0)
//             neg.push_back(A[i]);
//         else
//             pos.push_back(A[i]);
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         A[2 * i] = pos[i];
//         A[2 * i + 1] = neg[i];
//     }

//     return A;
// }

// optimal Solution : -- O(n) S.C :- for Retrun O(n)
vector<int> RearrangebySign(vector<int> A, int n)
{
    vector<int> ans(n, 0);
    int posIndex = 0 , negIndex = 1;

    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
        {
            ans[negIndex] = A[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = A[i];
            posIndex += 2;
        }
        
    }

    return ans;
}

//varity 2 : 


int main()
{
    int n = 4;
    vector<int> A{1, 2, -4, -5};

    vector<int> ans = RearrangebySign(A, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}