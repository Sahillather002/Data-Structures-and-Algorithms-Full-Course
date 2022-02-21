// meeting maximum guests
// having arrival and departure array
#include<bits/stdc++.h>
using namespace std;
int maxGuest(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,res=1,curr=1;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        res = max(res , curr);
    }
    return res;
}
int main()
{
    int arr[]={900,600,700};
    int dep[]={1000,800,730};
    maxGuest(arr,dep,3);
}