#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secondLargest(int arr[], int size)
{
    int laregst = arr[0];
    int secondlarest = -1;

    if (size < 2)
        return -1;
        
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > laregst)
        {
            secondlarest = laregst;
            laregst = arr[i];
        }
        else if (laregst > arr[i] && secondlarest < arr[i])
        {
            secondlarest = arr[i];
        }
    }
    return secondlarest;
}

int secondSmallest(int arr[], int size)
{
    int Smallest = arr[0];
    int secondSmallest = INT_MAX;

    if (size < 2)
        return -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < Smallest)
        {
            secondSmallest = Smallest;
            Smallest = arr[i];
        }
        else if (Smallest != arr[i] && secondSmallest > arr[i])
        {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int main()
{
    int arr[6] = {1, 2, 4, 7, 7, 5};
    cout << "secondLargest is"
         << " ";
    cout << secondLargest(arr, 6) << endl;
    cout << "secondSmallest is"
         << " ";
    cout << secondSmallest(arr, 6) << endl;
    return 0;
}