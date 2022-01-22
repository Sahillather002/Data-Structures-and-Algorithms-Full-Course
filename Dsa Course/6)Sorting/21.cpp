// partition function of quick sort
#include<iostream>
using namespace std;
// we basically partitate our array around any element 

void fs(int arr[], int l , int h , int p)
{
    int temp[h-l+1] , index=0;
    for(int i=l,i<=h;i++)
    if(arr[i] <= arr[p])
    {
        temp[index]=arr[i];
        index++;
    }
    for(int i=l;i<=h;i++)
    if(arr[i]>arr[p])
    {
        temp[index]=arr[i];
        index++;
    }
    for(int i=l;i<=h;i++)
    arr[i] = temp[i-l];
}