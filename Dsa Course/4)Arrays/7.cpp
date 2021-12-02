//Deletion in array
#include<iostream>
using namespace std;

int delete(int arr[],int n,int x){
    int i;
    for(int i=0;i<n;i++)
    if(arr[i]==x)
    break;
    if(i==n)
    return n;
    
    for(int j=i;j<n-1;j++)
    arr[j]=arr[j+1];

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout<<delete(arr,6,4);
}