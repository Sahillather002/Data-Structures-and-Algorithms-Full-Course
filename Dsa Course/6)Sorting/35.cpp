//merge overlapping intervals
#include<iostream>
using namespace std;
// sort in increasing order of start time
struct Interval
{
    int st;
    int end;
}
void mergeIntervals(Interval arr[],int n)
{
    sort(arr,arr+n,myComp);
    int res = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[res].end>=arr[i].st)
        {
            arr[res].end = max(arr[res].end,arr[i].end);
            arr[res].st = min(arr[res].st,arr[i].st);
        }
        else{
            res++;
            arr[res]=arr[i];
        }
        for(int i=0;i<=res;i++)
        cout<<arr[i].st<<" "<<arr[i].end<<endl;
    }
}