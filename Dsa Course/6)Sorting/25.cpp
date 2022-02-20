// Quick Sort Algo Using Lomuto Partition
#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return (i + 1);
}

void qSort(int arr[],int l , int h)
{
    if(l<h)
    {
        int p = partition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}

int main(){
    int arr[]={8,4,7,9,3,10,5};
    qSort(arr,0,6);
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
}