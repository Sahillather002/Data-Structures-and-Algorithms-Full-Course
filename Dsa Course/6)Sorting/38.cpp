// heap sort
// worst case complexity is nlogn
#include <bits/stdc++.h>
using namespace std;
// STEP - 1
// builiding a max heap
void maxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, n, largest);
    }
}
void buildHeap(int arr[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)
        maxHeapify(arr, n, i);
}

// STEP-2
/*
repeatedly swap root with last node,
reduce heap size by one and heapify
*/
void heapSort(int arr[],int n)
{
    buildHeap(arr,n);
    for(int i=n-1;i>=1;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}