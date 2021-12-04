// finding index of first occurence
#include<iostream>
using namespace std;

// first sol
// O(n)
int fs(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    if(arr[i]==x)
    return i;

    return -1;
}

// second sol.
// using recursive binary search
int ss(int arr[],int low,int high,int x)
{
    if(low>high)
    return -1;
    int mid = (low+high)/2;
    if(x>arr[mid])
    return ss(arr,mid+1,high,x);
    else 
    if(x<arr[mid])
    return ss(arr, low,mid-1,x);
    else
    {
        if(mid == 0 || arr[mid-1]!=arr[mid])
        return mid;
        else
        return ss(arr, low , mid-1,x);
    }
}

int main()
{
    int arr[]={5,10,10,15,15};
    cout<<fs(arr,5,5);
    cout<<ss(arr,0,4,5);
}