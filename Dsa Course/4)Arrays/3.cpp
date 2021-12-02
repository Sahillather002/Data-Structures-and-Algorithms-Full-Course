// ADVANTAGES OF VECTORS
/*
Dynamic size
Rich Library function find , erase , insert,etc.
Easy to know size
No need to pass size
Can be returned from a function
By default initialized with default values
We can copy of vector to other --
i.e; v1 = v2
*/

// Example of Capacity in vector c++
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    for (int i = 1; i <= 10; i++)
        v1.push_back(i);
    cout << "Size of Vector: " << v1.size() << endl;
    cout << "Capacity of Vector: " << v1.capacity() << endl;
    cout << "Max_Size of vector: " << v1.max_size() << endl;
    v1.resize(5); // resizes the vector size to 5
    // prints the vector size after resize()
    cout << "Size of vector after resize: " << v1.size() << endl;
    // checks if the vector is empty or not
    if (v1.empty() == false)
        cout << "Vector is not empty";
    else
        cout << "Vector is empty";
    return 0;
}