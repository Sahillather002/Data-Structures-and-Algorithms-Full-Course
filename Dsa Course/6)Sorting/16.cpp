// intersection of two array with merge function
#include<iostream>
using namespace std;

int fs(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int a[] = {1, 20, 20, 40, 60};
    int b[] = {2, 20, 20, 20};
    fs(a, b, 5, 4);
}