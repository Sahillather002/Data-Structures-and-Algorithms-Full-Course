// finding the majority element
#include <iostream>
using namespace std;

// sol1 -- O(n^2)
int fs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
                cout++;
        if (cout > n / 2)
            return i;
    }

    return -1;
}

int main()
{
    int arr[]={8,7,6,8,6,6,6,6};
}