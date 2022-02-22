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

    // defining search function
    bool search(int key)
    {
        int h = hash(key);
        int i = h;
        while(arr[i]!=-1)
        {
            if(arr[i]==key)
            return true;
            i = (i+1)%cap;
            if(i==h)
            return false;
        }
        return false;
    }
}

int main()
{
    int arr[]={49,50,51,63,-1,-1,69};
    
}