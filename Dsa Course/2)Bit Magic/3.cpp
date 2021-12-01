// counting set bits
#include<iostream>
using namespace std;
/* sample input 
for n=5 , o/p=2
for n=7 ,o/p = 3
for n=13 , o/p=3
*/

// first solution --
//check for last bit iteratively
int fs(int n){
    int res = 0;
    while(n>0){
        if(n%2 !=0)
        res++;
        n=n>>1; // removing last bit can be done as n=n/2

    }
    return res;
}
// Time complexity of the first solution is--
// theta(Total Bits in n)

// Second solution -BRIAN'S KERNINGAM'S ALGO
// It will turn off last bit "1" 
int ss(int n){
    int res=0;
    while(n>0){
        n=(n&(n-1));
        res++;
    }
    return res;
}

main(){
    cout<<fs(5);
    cout<<ss(5);
}