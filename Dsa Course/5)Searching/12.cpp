// two pointer approach
// given a sorted array and a sum 
// to find if there exist a triplet for sum
#include<iostream>
using namespace std;

// sol 1
// O(n^3)
int fs(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                cout<<"Triplet is present";
            }
        }
    }
    return -1;
}

int main()
{
    int arr[]={2,3,4,8,9,20,40};
    cout<<fs(arr,7,32);
}