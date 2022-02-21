// Cycle sort
/*
-- worst case O(n^2) sorting algo
-- it does minimum memory writes and can
be useful for cases where memory write
is costly
-- it is in-place - means it does not
requires extra space
and not stable - if there are two equal
elements then there positions may change
-- useful to solve questions like find
minimum swaps required to sort and array
*/
#include <iostream>
using namespace std;

void cycleSort(int arr[], int n)
{
    for (int cs = 0; cs < n - 1; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for (int i = cs + 1; i < n; i++)
            if (arr[i] < item)
                pos++;
        swap(item, arr[pos]);
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
                if (arr[i] < item)
                    pos++;
            swap(item, arr[pos]);
        }
    }
}
int main()
{
    int arr[] = {20, 40, 5, 10, 30};
    cycleSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] <<" ";
}