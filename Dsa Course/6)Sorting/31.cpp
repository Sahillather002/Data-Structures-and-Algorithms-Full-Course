//sort an array with two types 
#include<iostream>
using namespace std;
// naive sol
void segregatePosNeg(int arr[],int n)
{
    int temp[n],i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
            temp[i]==arr[j];
            i++;
        }
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]>=0)
        {
            temp[i]=arr[i];
            i++;
        }
    }
    for(int j=0;j<n;j++)
    arr[j]=temp[j];
}
int main(){
    int arr[]={13,-12,18,-10};
    segregatePosNeg(arr,4);
    for(int i=0;i<4;i++)
    cout<<arr[i]<<endl;
}