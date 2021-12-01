// finding power of 2 or not
#include<iostream>
using namespace std;

//solution 1 - just divide by 2 until zero
bool fs(int n){
    if(n==0)
    return false;
    while(n!=1){
        if(n%2 !=0)
        return false;
        n=n/2;
    }
    return true;
}

// solution 2 
bool ss(int n){
    if(n==0)
    return false;
    return((n & (n-1))==0);
}
int main(){
    cout<<fs(16);
    cout<<ss(16);
}