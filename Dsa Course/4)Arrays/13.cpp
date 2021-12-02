// finding second largest element in array
#include <iostream>
using namespace std;

// first solution

int getlargest(int arr[], int n)
{
    int largest = 0;
    for (int i = 1; i < n; i++)
    
        if (arr[i] > arr[largest])
            largest = i;

        return largest;
    
}
int fs(int arr[], int n)
{
    int largest = getlargest(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (res == -1)
                res = i;
            else if (arr[i] > arr[res])
                res = i;
        }
    }
    return res;

}

int main(){
    int arr1[]={5,20,12,20,10};
    cout<<fs(arr1,5);
    int arr2[]={10,10,10};
    cout<<fs(arr2,2);
}