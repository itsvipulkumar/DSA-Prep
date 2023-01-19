// c program to implement binary search in a reverse sorted array
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int key, int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> arr{15, 12, 10, 8, 6, 4, 2, 1};
    int key = 6;
    int n = arr.size();
    cout << "The index of key is " << binarySearch(arr, key, n);
    return 0;
}
