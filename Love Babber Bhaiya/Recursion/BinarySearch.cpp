#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int num, int l, int h)
{
    if (l > h)
        return false;

    int mid = l + (h - l) / 2;
    if (num == arr[mid])
        return true;

    if (num > arr[mid])
    {
        return binarySearch(arr, num, mid + 1, h);
    }
    else
    {
        return binarySearch(arr, num, l, mid - 1);
    }
}
int main()
{
    int arr[] = {2, 4, 5, 10, 14, 18};
    int num = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;

    cout << binarySearch(arr, num, low, high);
    return 0;
}