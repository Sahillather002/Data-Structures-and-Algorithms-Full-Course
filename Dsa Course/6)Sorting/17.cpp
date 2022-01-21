// union of two sorted array
#include<bits/stdc++.h>
using namespace std;
int fs(int a[],int b[],int m,int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        c[i] = a[i];
    
    }
    for(int i=0;i<n;i++)
    {
        c[m+i] = b[i];
    }
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++)
    if(i==0 || c[i]!=c[i-1])
    cout<<c[i]<<" ";

    return 0;
}

int main()
{
    int a[]={10,20,20};
    int b[]={5,20,40,40};
    cout<<fs(a,b,3,4);
}