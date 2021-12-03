// Binary Search 
/* we first find the mid point 
then compare with requried ans , 
if same then return the mid , 
otherwise if mid is greater than required answer, then
we shift to the left portion of the mid and again do 
the binary search on it , 
if mid is smaller than the required answer then 
we shift to the right portion of the mid and again do 
the binary search on it.
*/
#include<iostream>
using namespace std;

int bs(int arr[],int n,int x)
{
    int low =0 , high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        high = mid-1;
        else
        low = mid + 1;

    }
    return -1;
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    cout<<bs(arr,6,30);
}