// Lomuto partition
#include<iostream>
using namespace std;

int lPartition(int arr[],int l,int h)
{
    int pivot = arr[h];
    int i = low-1;
    for(int j=low ; j<=high-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return(i+1);
}