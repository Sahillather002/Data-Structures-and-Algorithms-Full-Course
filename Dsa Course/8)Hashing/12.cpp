// counting distinct elements
#include <iostream>
#include <unordered_set>
using namespace std;
// efficient sol
int countDist(int arr[], int n)
{
    unordered_set<int> s(arr,arr+n);
    return s.size();
}
int main()
{
    int arr[] = {10, 20, 10, 20, 30};
    cout << countDist(arr, 5);
}