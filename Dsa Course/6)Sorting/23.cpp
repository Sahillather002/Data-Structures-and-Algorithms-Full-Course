// Hoare's Partition
//here pivot is not at correct position
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
int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    partition(arr, 0, 7);
    cout << arr[0]<<endl;
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
}