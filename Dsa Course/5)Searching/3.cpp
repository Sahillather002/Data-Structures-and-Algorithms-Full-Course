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


int main()
{
    int arr[]={5,10,10,15,15};
    cout<<fs(arr,5,5);
}