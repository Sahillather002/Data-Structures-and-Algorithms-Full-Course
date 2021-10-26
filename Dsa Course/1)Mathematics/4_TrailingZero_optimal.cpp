//optimal solution to find trailing zeroes
//we just have to find no of 5 factorial have
#include<iostream>
using namespace std;
 
 int countzero(int n){
     int res =0;
     for(int i=5;i<n;i=i*5){
         res = res + n/i;

     }
     return res;
 }

 int main(){
     cout<<countzero(251);
 }