// examples of vector in C++
/* When the vector is full, 
i.e. when the elements in the vector are equal 
to the vector’s capacity, then the vector is doubled, 
i.e. if it is 2 before the capacity, 
then it is --
2 * 2 = 4 + 2 = 4.

*/
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
