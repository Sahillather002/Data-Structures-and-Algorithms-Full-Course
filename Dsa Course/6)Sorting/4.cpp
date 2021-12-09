// bubble sort
#include<iostream>
using namespace std;

int bubbleSort(int arr[] , int n)
{
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-1;j++)
    if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return -1;
}

int main()
{
    int arr[]={10,8,20,5};
    cout<<bubbleSort(arr,4);
}