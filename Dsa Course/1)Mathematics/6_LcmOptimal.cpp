// a*b = gcd(a,b) * lcm(a,b)

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0)
    return a%b;
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return(a*b)/gcd(a,b);
}

int main(){
    cout<<lcm(4,6);
}