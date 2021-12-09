// optimizing bubble sort
#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++)
    if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);

}

int main()
{
    int arr[]={10,8,20,5};
    int num = 4;
    bubblesort(arr,num);
    for(int i=0;i<num;i++)
    cout<<arr[i]<<" ";
}