// sort an array with two types
// with better approach
// using hoare's partition
#include<iostream>
using namespace std;

void segPosNeg(int arr[],int n)
{
    int i=-1;
    int j=n;
    while(true)
    {
        do
        {
            i++;
        }while(arr[i]<0);

        do
        {
            /* code */
            j--;
        } while (arr[j]>0);
        
        if(i>=j)
        return;
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int arr[] = {-12,18,-10,15};
    segPosNeg(arr,4);
    for(int i=0;i<4;i++)
    cout<<arr[i]<<endl;
    
}