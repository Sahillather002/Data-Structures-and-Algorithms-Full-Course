// optimal solution for merge sort
#include<iostream>
using namespace std;

void merge2(int a[],int b[],int m,int n)
{
    int i=0;
    int j=0;
    while(i<m && j<n)
    {
        if(a[i]<=b[i])
        {
            cout<<a[i]<<" ";
            i++;

        }
        else
        {
            cout<<b[i]<<" ";
            j++;
        }
        while(i<m)
        {
            cout<<a[i]<<" ";
            i++;
        }
        while(j<n)
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
}
int main()
{
    int a[]={10,20,50};
    int b[]={5,50,50};
    merge2(a,b,3,3);
    
}