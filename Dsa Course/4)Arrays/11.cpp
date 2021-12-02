#include <iostream>

using namespace std;
int main()
{
    int Arr[50];
    int x;
    cout << "Enter Array size:" << endl;
    cin >> x;

    for (int i = 0; i < x; i++)
    {

        cout << "Enter the number at index " << i << endl;
        cin >> Arr[i];
    }

    int max = Arr[0];
    int min = Arr[0];
    for (int i = 0; i < x; i++)
    {

        if (max < Arr[i])
        {

            max = Arr[i];
        }
        else if (min > Arr[i])
        {

            min = Arr[i];
        }
    }

    cout << max << " is the Maximum and " << min << " is the minimum number" << endl;
    return 0;
}