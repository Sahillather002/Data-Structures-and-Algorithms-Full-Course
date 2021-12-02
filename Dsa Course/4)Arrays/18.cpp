// stock buy and sell problem
// to maximize the profit
#include <iostream>
using namespace std;

// solution 2 -- effective solution

int ss(int price[],int n)
{
    int profit = 0;
    for(int i=1;i<n;i++)
    if(price[i]>price[i-1])
    profit = profit + (price[i]-price[i-1]);

    return profit;
}

int main()
{
    int price[] = {1, 5, 3, 8, 12};
    cout << ss(price,5);
}
