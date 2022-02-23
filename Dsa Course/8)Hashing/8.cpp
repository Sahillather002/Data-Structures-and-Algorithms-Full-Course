// unordered map in c++ stl
/*
- it is used to store key , value pair
- ordinarly map is based on red black tree
but unordered map is based on hashing
- it uses hashing
- there is no order of keys
- search , insert , delete are of O(1)
*/
#include<iostream>
#include<unordered_map> 
using namespace std;
int main()
{
    unordered_map<string, int> m;
    m["abc"] = 20;
    m["def"] = 30;
    m.insert({"ghi", 15});
    for(auto x : m)
    cout<<x.first<<" "<<x.second<<endl;
    return 0;
}