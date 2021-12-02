// finding maximum consecutive 1's in a binary array
#include <iostream>
using namespace std;

// solution 1 -- naive solution
// complexity -- O(n^2)

int fs(arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
                curr++;
            else
                break;
        }
        res = max(res, curr);
    }
    return res;
}

int main()
{
    int arr[] = {0, 1, 1, 1, 0, 1, 1};
    cout << fs(arr, 7);
}