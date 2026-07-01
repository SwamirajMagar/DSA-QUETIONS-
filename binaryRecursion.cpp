#include <iostream>
using namespace std;

                    //  BINARY SEARCH BY RECURSION

bool binaryS(int arr[], int size, int start, int end, int key)
{

    // base case
    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    else if (arr[mid] < key)
    {
        start = mid + 1;
        bool remain = binaryS(arr, size - mid, start, end, key);
        return remain;
    }
    else
    {
        end = mid - 1;
        bool remain = binaryS(arr, size - mid, start, end, key);
        return remain;
    }
}

int main()
{

    int arr[5] = {2, 3, 5, 8, 9};
    int size = 5;
    int start = 0;
    int end = size - 1;
    int key = 1;

    int ans = binaryS(arr, size, start, end, key);

    if (ans)
    {
        cout << "present";
    }
    else
    {
        cout << "absent";
    }

    return 0;
}