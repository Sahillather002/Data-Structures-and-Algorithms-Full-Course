// effective sol. to consecutive 1's
#include<iostream>
using namespace std;

int ss(bool arr[],int n){
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=0)
        curr=0;
        else
        {
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}

int main()
{
    int arr[]={0,1,1,1,0,1,1};
    cout<<ss(arr,7);

}