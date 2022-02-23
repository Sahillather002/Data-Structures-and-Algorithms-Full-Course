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

    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;
    return 0;
}