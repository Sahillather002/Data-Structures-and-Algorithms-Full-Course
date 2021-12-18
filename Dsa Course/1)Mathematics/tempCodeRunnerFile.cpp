#include<iostream>
using namespace std;

int factor(int n)
{
    if(n<=1)
    return;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            printf(i);
            n=n/i;
        }
    }
    if(n>1)
    {
    return n;
    }
}

int main(){
    factor(10);
}