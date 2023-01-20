#include <bits/stdc++.h>
using namespace std;
int MinEleRotatedArr(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    if(arr[0]<arr[n-1])
    return arr[0];
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            return arr[mid + 1];
        }
        if (arr[mid] < arr[mid - 1])
            return arr[mid];
        if (arr[mid] > arr[0])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> nums{3,4,5,1,2};
    int n = nums.size();
    cout << MinEleRotatedArr(nums, n);
    return 0;
}