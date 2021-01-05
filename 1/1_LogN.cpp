
#include <bits/stdc++.h>

using namespace std;
int binarySearch(int arr[], int k, int sizeOfArray)
{
    for (size_t i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int mid;
    if (sizeOfArray != 1)
        mid = sizeOfArray / 2;
    else
        mid = sizeOfArray - 1;
    if (k == arr[mid])
        return mid;
    if (k > arr[mid])
    {
        return binarySearch(&arr[mid], k, mid);
    }
    else if (k < arr[mid])
    {
        return binarySearch(arr, k, mid);
    }
    else
    {
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    int binarySearch(int arr[], int k, int sizeOfArray);
    int sizeOfArray, k;
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    for (int i = 0; i < sizeOfArray; ++i)
    {
        cin >> arr[i];
    }
    cin >> k;
    int a;
    a = binarySearch(arr, k, sizeOfArray);
    if (a)
    {
        cout << "Found a Element matching : " << k << endl;
    }
    else
    {
        cout << "Not Found a Element matching : " << k << endl;
    }

    return 0;
}
