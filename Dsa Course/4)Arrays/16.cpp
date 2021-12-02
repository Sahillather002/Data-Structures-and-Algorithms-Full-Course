// frequencies of elements in a sorted array
#include<iostream>
using namespace std;

int  s(int arr[],int n)
{
    int freq=1 , i=1;
    while(i<n)
    {
        while(i<n && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq;
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2])
    cout<<arr[n-1];

    return 1;
}

int main()
{
    int arr[]={10,10,10,20,20,30};
    cout<<s(arr,6);

}