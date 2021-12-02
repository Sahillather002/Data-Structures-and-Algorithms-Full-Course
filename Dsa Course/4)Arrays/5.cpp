// Insertion in array
#include<iostream>
using namespace std;

int insert(int arr[],int n,int x,int cap,int pos){
    if(n==cap)
    return n;

    int idx = pos-1;
    for(int i=n-1;i>=idx;i--)
    arr[i+1]=arr[i];
    arr[idx]=x;

    for(int i=0;i<cap;i++){
        cout<<arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout<<insert(arr,8,10,10,4);
}