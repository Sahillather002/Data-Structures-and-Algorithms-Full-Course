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
// Time complexity is just -- Theta(no. of set bits)

// Third solution - Lookup Table Method for 32 bit numbers

int table[256];

void intialize(){
    table[0] = 0;
    for(int i=1 ;i<256;i++){
        table[i]=(i&1) + table[i/2];
    }
}

int ts(int n){
    int res = table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0 xff];
    return res;

}
//time complexity of this method is -- theta(1)


main(){
    cout<<fs(5)<<endl;
    cout<<ss(5)<<endl;
    cout<<ts(5)<<endl;
}