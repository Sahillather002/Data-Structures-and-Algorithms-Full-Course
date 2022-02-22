// Implementation of chaining
#include <bits/stdc++.h>
using namespace std;
// bucket size is already provided

struct myHash
{
    int bucket;
    list<int> *table; // used for implementing doubly linked list

    myHash(int b)
    {
        bucket = b;
        table = new list<int>[b];
    }

    void insert(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
    }
    void remove(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }
    bool search(int key)
    {
        int i = key % bucket;
        for (auto x : table[i])
            if (x == key)
                return true;
        return false;
    }
}