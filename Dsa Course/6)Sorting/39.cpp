// Counting sort
/*
uses when small inputs are there
complexity=O(n+k)
to sort n element in range from
o to k-1;
It is useful only when k is linear
*/
#include<iostream>
using namespace std;
//naive sol
void countSort(int arr[],int n,int k)
{
    int count[k];
    for(int i=0;i<k;i++)
    count[i]=0;
    for(int i=0;i<n;i++)
    count[arr[i]]++;

    int index = 0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<count[i];j++)
        {
            arr[index]=i;
            index++;
        }
    }
}

int main()
{
    int arr[]={1,4,4,1,0,1};
    countSort(arr, 6, 5);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
}