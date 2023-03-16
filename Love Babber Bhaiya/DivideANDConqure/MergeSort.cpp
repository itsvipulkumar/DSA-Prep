#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int n, int s, int e, int mid)
{
    vector<int> newarr;
    int first = s;
    int second = mid + 1;

    while (first <= mid && second <= e)
    {
        if (arr[first] <= arr[second])
        {
            newarr.push_back(arr[first]);
            first++;
        }
        else
        {
            newarr.push_back(arr[second]);
            second++;
        }
    }
    while (first <= mid)
    {
        newarr.push_back(arr[first]);
        first++;
    }
    while (second <= e)
    {
        newarr.push_back(arr[second]);
        second++;
    }
    for (int i = s; i <= e; i++)
    {
        arr[i] = newarr[i - s];
    }
}

void mergeSort(vector<int> &arr, int n, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    mergeSort(arr, n, s, mid);
    mergeSort(arr, n, mid + 1, e);
    merge(arr, n, s, e, mid);
}

int main()
{
    vector<int> arr{4, 8, 1, 23, 9, 67, 5, 10};
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    mergeSort(arr, n, s, e);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}