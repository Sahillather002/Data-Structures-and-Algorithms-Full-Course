//wap to find out the number of trailing zeros in factorial
#include<iostream>
using namespace std;

int countzero(int n){
    int fac =1;
    for(int i=2;i<=n;i++){
        fac = fac*i;

    }
    int res =0;
    while(fac %10 == 0){
        res ++;
        fac = fac/10;
    }
    return res;
}

int main(){
    cout<<countzero(50);
}
//code will not good for higher values of data
 