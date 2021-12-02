#include <iostream>
// to return maximum bishops possible
int maxConsecutive(int arr[], int n, int bit)
{
    int count = 0;
    int temp[2 * n] = {0};
    int maxC = 0;
    int j = 0, k = 0; // to twice copy arr[]
    while (j < 2)
    {
        for (int i = 0; i < n; i++)
        {
            temp[k++] = arr[i];
        }
        j++;
    }
    k = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        count = 0;
        while (temp[k++] == bit)
        {
            ++count;
        }
        if (maxC < count)
            maxC = count;
    }
    return maxC;
}
int main()
{
    int Arr[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};
    int N = 12;
    int bit = 1;
    printf("Maximum Consecutive 1's in circular array: %d", maxConsecutive(Arr, N, bit));
    bit = 0;
    printf("\nMaximum Consecutive 0's in circular array: %d", maxConsecutive(Arr, N, bit));
    return 0;
}