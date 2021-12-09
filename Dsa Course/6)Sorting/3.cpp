// sorting on our own way
#include <iostream>
#include <algorithm>
using namespace std;

struct point
{
    int x, y;
};
bool mycp1(point p1, point p2)
{
    return (p1.x < p2.x);
}
bool mycp2(point p1, point p2)
{
    return (p1.y < p2.y);
}
int main()
{
    point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    int n = 3;
    sort(arr, arr + n, mycp1);
    for (auto i : arr)
        cout << i.x << " " << i.y << endl;
    for (auto i : arr)
        cout << i.y << " " << i.x << endl;
}