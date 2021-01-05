/* Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int sizeOfArray;
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    int multiplication = 1;
    for (size_t i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
        multiplication *= arr[i];
    }
    int newArr[sizeOfArray];
    for (size_t i = 0; i < sizeOfArray; i++)
    {
        newArr[i] = multiplication / arr[i];
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}
