/* INSERTION SORT
time complexity -- O(n^2)
In place and Stable
It is used in practice for small arrays
like timSort and introsort
O(n) is best case
*/
#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
    int key = arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    }

}

int main()
{
    int arr[]={20,3,60,40,10,30};
    sort(arr,6);
    for(int i=1;i<6;i++)
    cout<<arr[i]<<" ";
}