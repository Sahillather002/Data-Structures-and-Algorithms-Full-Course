#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    m["abc"] = 20;
    m["def"] = 30;
    m["ghi"] = 15;
    if(m.find("abc")==m.end())
    cout<<"Found \n";
    else
    cout<<"Not found \n";
    for(auto it = m.begin();it ! = m.end(); it++)
    {
        cout<<(it ->first)<<" "<< (it ->second)<<endl;
    }
    return 0;
}