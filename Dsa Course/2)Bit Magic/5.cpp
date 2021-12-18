// finding only odd occurring number
#include <iostream>
using namespace std;

// solution 1
/*
int main()
{
    arr[] = {4, 3, 4, 4, 4, 5, 5};
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[j] == arr[i])
                count++;
        if ((count % 2) ! = 0)
            printf(arr[i]);
    }
}
*/

// second solution using xor operator

int findOdd(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
        res = res ^ arr[i];
    return res;
}

main()
{
    int arr[] = {4, 3, 4, 4, 4, 5, 5};
    cout << findOdd(arr, 7);
}