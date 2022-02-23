// unordered set in c++ stl
// find operation
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

    if(s.find(15)==s.end())
    cout<<"not found";
    else
    cout<<" found";
    
    if(s.count(15))
    cout<<"found";
    else
    cout <<"not found";
    return 0;
}