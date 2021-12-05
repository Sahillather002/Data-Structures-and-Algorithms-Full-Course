// search in an infinite sorted array
#include<iostream>
using namespace std;
// sol 1
int fs(int arr[],int x)
{
    int i=0;
    while(true)
    {
        if(arr[i]==x)
        return i;
        if(arr[i]>x)
        return -1;
        i++;
    }
}

// sol 2

int bs(int arr[], int low, int high, int x)
{
    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return bs(arr, low, mid - 1, x);
    else
        return bs(arr, mid + 1, high, x);
}
int ss(int arr[] ,int x)
{
    if(arr[0]==x)
    return 0;
    int i =1;
    while(arr[i]<x)
    i = i*2;
    if(arr[i]==x)
    return i;

    return bs(arr,x,i/2+1,i-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout<<fs(arr,5);
    cout<<ss(arr,5);
}