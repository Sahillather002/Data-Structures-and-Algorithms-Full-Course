// sort an array with tree types
// better approach
// Dutch National Flag Algorithm
//using hoare's algo
/* -- explaining dnf algo --
we gona maintain four sections in our array
first is of 0's 
second is of 1's
3rd is of unkonown's 
and 4th is of 2's
--using two pointers low and high
further about mid is below
*/
#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    int mid = 0;
    while(mid <= high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        mid ++;
        else 
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}