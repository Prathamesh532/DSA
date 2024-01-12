#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int> &nums , int N)
{
    int sum = N * ( N + 1 ) / 2;

    int s1 = 0;
    for(int i = 0 ; i<N-1; i++){
        s1 += nums[i];
    }

    return sum - s1 ;
}

// flaf burte 
// hash  
// XOR

int main()
{
    vector<int> a = {1, 2, 4, 5};
    int N = 5;
    cout << missingNumber(a ,N) << endl;
    return 0;
}