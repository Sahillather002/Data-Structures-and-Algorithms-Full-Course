/*
-selection sort
-time complexity--Theta(n^2)
-It does less memory writes compared to
quicksort,mergesort,insertion sort etc.
-It gives basic idea for HeapSort
-It is not stable sort
-It is In-place algo
*/
#include<iostream>
using namespace std;

//sol 1
void fs(int arr[],int n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int min=0;
        for(int j=1;j<n;j++)
        if(arr[j]<arr[min])
        min = j;
        temp[i]=arr[min];
        arr[min]= 0;

    }
    for(int i=0;i<n;i++)
    arr[i]=temp[i];
}