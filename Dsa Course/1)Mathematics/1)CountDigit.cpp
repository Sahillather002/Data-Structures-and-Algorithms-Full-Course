#include<iostream>
using namespace std;

int countdigit(int x){
    int res = 0;
    while(x>0){
        x = x/10;
        res++ ;

    }
    return res;
}

int main(){
    int a = 1234;
    cout<<countdigit(a);
}