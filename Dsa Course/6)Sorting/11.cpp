/* MERGE SORT
  it is a DAC (Divide and conquer) algo
  it is stable algo
  Theta (n * log(n))
  O(n) aux space
  used in external sorting
  well suited for linked list , works in O(1)
  But , in general for arrays , quicksort outperforms
*/
#include <iostream>
using namespace std;
// merging two sorted array

void merge1(int a[], int b[], int m, int n)
{
  int c[m + n];
  for (int i = 0; i < m; i++)
    c[i] = a[i];
  for (int i = 0; i < n; i++)
    c[m + i] = b[i];
  sort(c, c + m + n);
  for (int i = 0; i < (m + n); i++)
    cout << c[i] << " ";
}

int main()
{
  int a[] = {10, 15, 20, 20};
  int b[] = {1, 12};
  merge1(a, b, 4, 2);
}