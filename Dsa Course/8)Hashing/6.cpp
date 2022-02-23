// unordered set in c++ stl
#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    cout<<s.size()<<" ";
    s.erase(15);
    cout<<s.size()<<" ";
    auto it = s.find(10);
    s.erase(it);
    cout<<s.size()<<" ";
    return 0;
}