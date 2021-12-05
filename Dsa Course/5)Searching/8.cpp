// search in an infinite sorted array
#include<iostream>
using namespace std;
// sol 1
int fs(int arr[],int x)
{
    int i=0;
    while(true)
    {
        if(arr[i]==x)
        return i;
        if(arr[i]>x)
        return -1;
        i++;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout<<fs(arr,5);
}