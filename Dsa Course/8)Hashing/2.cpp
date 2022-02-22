// Implementation of open addressing
#include<bits/stdc++.h>
using namespace std;
// -1 represent a free slot
// -2 represent a deleted slot
// assuming user provide the input hash size

struct myHash
{
    int *arr;
    int cap ,size;
    myHash(int c)
    {
        cap = c;
        size = 0;
        for(int i=0;i<cap;i++)
        arr[i] = -1;
    }
    int hash(int key)
    {
        return key % cap;
    }
}