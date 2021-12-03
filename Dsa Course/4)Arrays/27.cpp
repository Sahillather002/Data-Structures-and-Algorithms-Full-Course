// majority element 
// if appears n/2 times
#include<iostream>
using namespace std;

// first solution -- O(n^2)

int fs(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count = 1;
        for(int j=i+1;j<n;j++)
        if(arr[i]==arr[j])
        count++;
        if(count > n/2)
        return i;
    }
    return -1;
}

int main()
{
    int arr[]={8,7,6,8,6,6,6,6};
    cout<<fs(arr,8);
}