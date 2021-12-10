#include <iostream>
using namespace std;
int findSmallest(int[], int);
int main()
{
    int myarray[10] = {11, 5, 2, 20, 42, 53, 23, 34, 101, 22};
    int pos, temp, pass = 0;
    cout << "\n Input list of elements to be Sorted\n";
    for (int i = 0; i < 10; i++)
    {
        cout << myarray[i] << "\t";
    }
    for (int i = 0; i < 10; i++)
    {
        pos = findSmallest(myarray, i);
        temp = myarray[i];
        myarray[i] = myarray[pos];
        myarray[pos] = temp;
        pass++;
    }
    cout << "\n Sorted list of elements is\n";
    for (int i = 0; i < 10; i++)
    {
        cout << myarray[i] << "\t";
    }
    cout << "\nNumber of passes required to sort the array: " << pass;
    return 0;
}
int findSmallest(int myarray[], int i)
{
    int ele_small, position, j;
    ele_small = myarray[i];
    position = i;
    for (j = i + 1; j < 10; j++)
    {
        if (myarray[j] < ele_small)
        {
            ele_small = myarray[j];
            position = j;
        }
    }
    return position;
}
/*
Introduction
Selection sort is quite a straightforward sorting technique as the technique only involves finding the smallest element in every pass and placing it in the correct position.
Selection sort works efficiently when the list to be sorted is of small size but its performance is affected badly as the list to be sorted grows in size.
Hence we can say that selection sort is not advisable for larger lists of data.

The complexity of Selection Sort Technique
Time Complexity: O(n2)
Space Complexity: O(1)

General Algorithm
The General Algorithm for selection sort is given below:

Selection Sort (A, N)

Step 1: Repeat Steps 2 and 3 for K = 1 to N-1
              Step 2: Call routine smallest(A, K, N,POS)
              Step 3: Swap A[K] with A [POS]
[End of loop]
Step 4: EXIT

Routine smallest (A, K, N, POS)

Step 1: [initialize] set smallestElem = A[K]
Step 2: [initialize] set POS = K
Step 3: for J = K+1 to N -1,repeat
if smallestElem > A [J]
set smallestElem = A [J]
set POS = J
[if end]
[End of loop]
Step 4: return POS
Pseudocode For Selection Sort
Procedure selection_sort(array,N)
    array – array of items to be sorted
    N – size of array
begin
    for I = 1 to N-1
    begin
        set min  = i
        for j = i+1 to N
        begin
            if array[j] < array[min] then
                min = j;
            end if
        end for
        //swap the minimum element with current element
        if minIndex != I then
            swap array[min[] and array[i]
        end if
    end for
end procedure

*/