//merge sort algorithm
#include<iostream>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    // deriving the seprate arrays
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = a[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = a[n1 + i];
    }

    // merging the array with sorting
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else
        {
            a[k] = right[i];
            k++;
            j++;
        }
        // updating the values
        while (i < n1)
        {
            a[k] = left[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            a[k] = right[j];
            j++;
            k++;
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