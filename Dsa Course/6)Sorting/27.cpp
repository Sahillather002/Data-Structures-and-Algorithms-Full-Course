// tail call elimination in quicksort
#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1;
    int j = h - 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}
void qSort(int arr[], int l, int h)
{
Begin:
    if (l < h)
    {
        int p = partition(arr, l, h);
        qSort(arr, l, p);
        l = p + 1;
        goto Begin;
    }
}

int main()
{
    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    qSort(arr, 0, 6);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
}