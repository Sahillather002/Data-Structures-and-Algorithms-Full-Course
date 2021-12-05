// square root of number
// and provide the floor value
#include <iostream>
using namespace std;

// sol 1
// theta(root of x)
int fs(int x)
{
    int i = 1;
    while (i * i <= x)
        i++;
    return (i - 1);
}

// sol 2
// theta(logx)
int ss(int x)
{
    int low = 1, high = x, ans = -1;
    while (low <= high)
    {
        /* code */
        int mid = (low + high) / 2;
        int msq = mid * mid;
        if (msq == x)
            return mid;
        else if (msq > x)
            high = mid - 1;
        else
        {
            low = mid + 1;
            ans = mid;
        }
        
    }
    return ans;
}
int main()
{
    cout << fs(10);
    cout<< ss(10);
}