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

int main(){
    cout<<fs(16);
}