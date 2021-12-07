// search in a sorted rotated array
#include<iostream>
using namespace std;

// sol 1
int fs(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    if(arr[i]==x)
    return i;

    return -1;
}


int main()
{
    int arr[]={100,200,400,1000,10,20};
    cout<<fs(arr,6,10);
    
}