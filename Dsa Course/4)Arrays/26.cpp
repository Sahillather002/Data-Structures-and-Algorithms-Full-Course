// finding maximum circular subarray sum
#include<iostream>
using namespace std;

// solutino 1 - time complexity O(n^2)
int fs(int arr[],int n)
{
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for(int j=1;j<n;j++)
        {
            int index = (i+j)%n;
            curr_sum += arr[index];
            curr_max = max(curr_max,curr_sum);

        }
        res = max(res,curr_max);
    }
    return res;
}

//solution 2 - using kadane's algo
//complexity -- O(n)

int normalmaxsum(int arr[],int n)
{
    int res = arr[0], maxend = arr[0];
    for(int i = 1;i<n;i++)
    {
        maxend = max(arr[i],maxend+arr[i]);
        res = max(res , maxend);
    }
    return res;
    
}

int ss(int arr[],int n)
{
    int max_normal = normalmaxsum(arr,n); // normal sum
    if(max_normal<0)
    return max_normal;

    int arr_sum = 0;
    for(int i=0;i<n;i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];

    }
    int max_circular = arr_sum + normalmaxsum(arr,n);

    return max(max_normal , max_circular);

}


int main()
{
    int arr[] = {5,-2,3,4};
    cout<<fs(arr,4);
    cout<<ss(arr,4);
}