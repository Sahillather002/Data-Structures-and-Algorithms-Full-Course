// selection sort
// better approach
#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind = i;
        for(int j=i+1;j<n;j++)
        if(arr[j]<arr[min_ind])
        min_ind = j;
        swap(arr[min_ind],arr[i]);
    }
}
int main()
{
    int arr[6]={10,5,8,20,2,18};
    sort(arr,6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
}