
/*

This problem was recently asked by Google.

    Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

    For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?

*/

#include <bits/stdc++.h>

using namespace std;

bool checkIfAvailable(int array[], int size, int element)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == element)
            return 1;
        else
        {
            return 0;
        }
    }
}

int main()
{
    int sizeofarray;
    cin >> sizeofarray;
    int a[sizeofarray];
    for (int i = 0; i < sizeofarray; ++i)
    {
        cin >> a[i];
    }
    int k;
    bool flag = 0;
    int known[sizeofarray];
    cin >> k;
    int temp;
    for (size_t i = 0; i < sizeofarray; i++)
    {
        temp = k - a[i];
        if (checkIfAvailable(a, sizeofarray, temp))
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
