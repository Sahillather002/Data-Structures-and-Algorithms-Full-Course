// Searching in array
#include<iostream>
using namespace std;

//Time complexity is -- O(n)
int search(int arr[],int n, int x){
    for(int i=0;i<n;i++)
    if(arr[i]==x)
    return i;

    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    cout<<search(arr,6,3);
}