// maximum sum subarray
#include<iostream>
using namespace std;

// naive solution
// time complexity -- O(n^2)

int fs(int arr[] , int n)
{
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        int curr =0;
        for(int j=i;j<n;j++)
        {
            curr = curr + arr[i];
            res = max(res,curr);
        }
    }
    return res;

}

int main()
{
    int arr[]={1,-2,3,-1,2};
    cout<<fs(arr,5);
}