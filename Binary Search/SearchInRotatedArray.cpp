#include <bits/stdc++.h>
using namespace std;
int searchIndex(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    if (arr.size() == 1)
        return 0;
    if (arr[s] < arr[e])
        return s;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid - 1])
            return mid;
        if (arr[mid] > arr[mid + 1])
        {
            return mid + 1;
        }
        if (arr[mid] > arr[0])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
int binarySearchLeft(vector<int> &arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
int binarySearchRight(vector<int> &arr, int index, int key)
{
    int s = index;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr{5,1,2,3,4};
    int target = 4;
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    if (arr[s] < arr[e])
        cout << binarySearchRight(arr, 0, target);

    else
    {
        int index = searchIndex(arr, n);

        if (binarySearchLeft(arr, index, target) != -1)
        {
            cout << "Yes left" << endl;
        }
        else
            cout << binarySearchRight(arr, index, target);
    }
    return 0;
}