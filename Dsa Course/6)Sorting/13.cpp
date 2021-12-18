// merge function of merge sort 
#include<iostream>
using namespace std;

void merge(int a[],int low,int mid, int high)
{
    // deriving the seprate arrays
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=a[low+i];

    }
    for(int i=0;i<n2;i++)
    {
        right[i]=a[n1+i];
    }
}