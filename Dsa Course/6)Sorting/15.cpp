// intersection of two sorted array
#include<iostream>
using namespace std;

void fs(int a[],int b[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        if(i>0 && a[i]==a[i-1])
        continue;
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<< " ";
                break;
            }
        }
    }
}
// complexity -- O(n*m)
int main()
{
    int a[]={1,20,20,40,60};
    int b[]={2,20,20,20};
    fs(a,b,5,4);
}