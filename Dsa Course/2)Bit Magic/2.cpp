// To check if k-th bit is set or not
#include<iostream>
using namespace std;
// method first using left shift operator
int ls(int n,int k){
    if(n & (1<<(k-1))!=0)
    return 1;
    else
    return 0;

}
// method second using right shift operator
int rs(int n, int k){
    if(((n>>(k-1))&1)==1)
    return 1;
    else
    return 0;
}

main(){
    cout<<ls(5,3)<<endl;
    cout<<rs(5,3);
}