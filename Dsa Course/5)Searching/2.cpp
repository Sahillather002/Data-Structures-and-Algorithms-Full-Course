// recursive binary search
#include <iostream>
using namespace std;

int bs(int arr[], int low, int high, int x)
{
    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return bs(arr, low, mid - 1, x);
    else
        return bs(arr, mid + 1, high, x);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    cout << bs(arr, 0,5, 30);
}