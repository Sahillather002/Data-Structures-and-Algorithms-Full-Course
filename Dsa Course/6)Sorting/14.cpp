//merge sort algorithm
#include<iostream>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[i])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[i] << " ";
            j++;
        }
        while (i < m)
        {
            cout << a[i] << " ";
            i++;
        }
        while (j < n)
        {
            cout << b[j] << " ";
            j++;
        }
    }
}
void mergeSort(int arr[],int l,int r)
{
    if(r>l) // checking for array having atleast two elements
    {
        int m = l + (r-l)/2 ;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}