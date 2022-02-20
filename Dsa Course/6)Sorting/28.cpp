// K-th smallest element
#include<iostream>
using namespace std;
// naive solution
int kSmall(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}

int main(){
    int arr[]={10,5,30,2};
    cout<<kSmall(arr,4,2);
}