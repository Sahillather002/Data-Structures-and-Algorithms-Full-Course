// max length alternative even - odd subarray
#include<iostream>
using namespace std;

// sol 1 - O(n^2)
int fs(int arr[],int n)
{
    int res =1;
    for(int i=0;i<n;i++)
    {
        int curr = 1;
        for(int j=i+1;j<n;j++)
        {
            if(((arr[j]%2==0)&&arr[j-1]%2 !=0) || (arr[j]%2 !=0 && arr[j-1]%2 == 0))        
            
            curr++;
            else
            break;
        }
        res = max(res,curr);
    }
    return res;
}

// efficient solution -- cadane's algo
int ss(int arr[],int n)
{
    int res = 1;
    int curr = 1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2 !=0)
        || (arr[i]%2 !=0 && arr[i-1]==0))
        {
            curr++;
            res = max(res,curr);
        }
        else curr = 1;
    }
    return res;
}
int main()
{
    int arr[]={5,10,20,6,3,8};
    cout<<fs(arr,6);
    cout<<ss(arr,6);
}