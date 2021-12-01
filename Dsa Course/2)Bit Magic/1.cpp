#include<iostream>
using namespace std;
int main(){
    int x = 3 , y = 6;
    cout<<(x&y)<<"\n"; // bitwise and
    cout<<(x|y)<<"\n"; // bitwise or 
    cout<<(x^y)<<"\n"; // bitwise xor
    
    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;
    cout<<(x>>1)<<endl;
    cout<<(x>>2)<<endl;

    unsigned int a = 1;
    cout<<(~a)<<endl;
    int b = 1;
    cout<<(~b)<<endl;

}