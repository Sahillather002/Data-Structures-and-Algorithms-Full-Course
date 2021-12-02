// examples of vector in C++
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<double> marks(10);
    for (vector<double>::size_type i = 0; i < 10; i++)
    {
        cout << "Enter student marks : " << i + 1 << ": " << flush;
        cin >> marks[i];
    }
    return 0;
}