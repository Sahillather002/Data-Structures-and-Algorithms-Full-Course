// efective solution max element finding in array
#include<iostream>
using namespace std;

int s(int arr[],int n){
    int res=0;
    for(int i=1;i<n;i++)
    if(arr[i]>arr[res])
    res=i;
    return res;
}
int main()
{
    int arr[] = {5, 8, 20, 10};
    cout << s(arr, 4);
    return 0;
}