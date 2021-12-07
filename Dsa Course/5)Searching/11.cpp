// two pointer approach
/* given an unsorted array and a number x ,
we need to find if there is pair in the 
array with sum equals to x
*/
#include<iostream>
using namespace std;

bool fpair(int arr[],int n,int x)
{
    int left = 0;
    int right = n-1;
    while (left<right)
    {
        /* code */
        if(arr[left]+arr[right]==x)
        return true;
        else if(arr[left]+arr[right]>x)
        right--;
        else
        left++;
    }
    return false;

}

int main()
{
    int arr[]={2,3,4,5,6,7,8,10,12};
    cout<<fpair(arr,9,30);
}