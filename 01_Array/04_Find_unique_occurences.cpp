#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    sort(arr.begin() , arr.end());
    vector<int> ans;

    int count = 0;

    for(int i=1; i<arr.size(); i++){
        if(arr[i] == arr[i-1]){
            count++;
        }
        else{
            ans.push_back(count);
            count = 0;
        }
    }

    ans.push_back(count);

    sort(ans.begin() , ans.end());

    for(int i=1; i<ans.size(); i++){
        if(ans[i] == ans[i-1]){
            return false;
        }
    }

    return true;
    
}

int main()
{

   vector<int> arr = {1,2};

   cout << uniqueOccurrences(arr);

    return 0;
}