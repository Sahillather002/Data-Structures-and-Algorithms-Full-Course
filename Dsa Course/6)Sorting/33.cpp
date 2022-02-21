//sort an array with three types
#include<iostream>
using namespace std;
//naive solution
void sort(int arr[],int n)
{
    int temp[n],i=0;
    for(int j=0;j<n;j++)
    if(arr[j]==0)
    {
        temp[i]=arr[j];
        i++;
    }
    for(int j=0;j<n;j++)
    if(arr[j]==1)
    {
        temp[i]=arr[j];
        i++;
    }
    for(int j=0;j<n;j++)
    if(arr[j]==2)
    {
        temp[i]=arr[j];
        i++;
    }
    for(int j=0;j<n;j++)
    arr[j]=temp[j];
}
// it required 4 traversals
// Time : O(n)/ theta of n
// Aux Space : O(n)/theta of n
int main()
{
    int arr[]={0,1,1,2,0,1};
    sort(arr,6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<endl;
}