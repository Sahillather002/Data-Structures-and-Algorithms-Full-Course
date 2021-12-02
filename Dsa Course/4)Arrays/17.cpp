// stock buy and sell problem
// to maximize the profit
#include<iostream>
using namespace std;

// solution 1 -- naive solution

int fs(int price[],int start , int end)
{
    if(end <=start)
    return 0;

    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(price[j]>price[i])
            {
                int curr_profit = price[j]-price[i]+fs(price,start,i-1)+fs(price,j+1,end);

                profit = max(profit,curr_profit);
            }

        }

    }
    return profit;
}

int main()
{
    int price[]={1,5,3,8,12};
    cout<<fs(price,0,4);
}