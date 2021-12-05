// index of last occurence
#include<iostream>
using namespace std;

int fs(int arr[],int low,int high , int x,int n)
{
    if(low>high)
    return -1;
    int mid = (low+high)/2;
    if(arr[mid]>x)
    return fs(arr,low,mid-1,x,n);
    else if(arr[mid]<x)
    return fs(arr,mid+1,high,x,n);
    else
    {
        if(mid == n-1 || arr[mid] != arr[mid+1])
        return mid;
        else
        return fs(arr,mid+1,high,x,n);

    }
    
}

int main()
{
    int arr[]={5,10,10,10,10,20,20};
    cout<<fs(arr,0,6,10,7);
}