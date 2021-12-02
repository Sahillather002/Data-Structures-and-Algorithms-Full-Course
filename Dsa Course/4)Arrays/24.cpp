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

// efficient solution
// time complexity - O(n)

int ss(int arr[],int n)
{
    int res = arr[0];
    int maxend = arr[0];

    for(int i=1;i<n;i++)
    {
        maxend = max(maxend+arr[i],arr[i]);
        res = max(res , maxend);
    }
    return res;
}
int main()
{
    int arr[]={1,-2,3,-1,2};
    cout<<fs(arr,5);
    cout<<ss(arr,5);
}