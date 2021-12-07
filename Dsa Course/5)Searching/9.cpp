// search in a sorted rotated array
#include <iostream>
using namespace std;

// sol 1
int fs(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;

    return -1;
}

// sol 2
int ss(int arr[],int n,int x)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
        return mid;
        if(arr[low]<arr[mid])
        {
            if(x>=arr[low] && x<arr[mid])
            high = mid - 1;
            else
            low = mid + 1;

        }
        else
        {
            if(x>arr[mid] && x<=arr[high])
            low = mid +1;
            else
            high = mid -1;

        }

        
    }
    return -1;
}
int main()
{
    int arr[] = {100, 200, 400, 1000, 10, 20};
    cout << fs(arr, 6, 10);
    cout<<ss(arr,6,10);
}