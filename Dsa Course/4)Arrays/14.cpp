// checking for sorted or not 
#include<iostream>
using namespace std;

// naive solution
//complexity -- O(n^2)
bool fs(int arr[],int n){
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    if(arr[j]<arr[i])
    return false;

    return true;
}

// efficient method
bool ss(int arr[],int n){
    for(int i=1;i<n;i++)
    if(arr[i]<arr[i-1])
    return false;
     
     return true;
}

main(){
    int arr1[]={7,20,30,10};
    int arr2[]={1,2,3,4};
    cout<<fs(arr1,4)<<endl;
    cout<<fs(arr2,4)<<endl;
    cout<<ss(arr1,4);
    cout<<ss(arr2,4);
}

