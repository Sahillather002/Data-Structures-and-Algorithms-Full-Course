//chocolate distribution problem
/*
we have to pick given number of packets
such that difference b/w min and max
element is minimum

*/
#include<iostream>
using namespace std;

int minDiff(int arr[], int n,int m){
    if(m>n)
    {
        return -1;
    }
    int res = arr[m-1]-arr[0];
    for(int i=1;(i+m-1)<n;i++)
    res = min(res,(arr[i+m-1]-arr[i]));
    return res;
}
int main()
{
    int arr[]={7,3,2,4,9,12,56};
    cout<<minDiff(arr,7,3);
}