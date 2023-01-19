// c program to implement binary search in a reverse sorted array
#include <bits/stdc++.h>
using namespace std;
int firstOccSearch(vector<int> &arr, int key, int n)
{
    int s = 0;
    int ans=-1;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
            {
                ans=mid;
                e=mid-1;
            }
        else if (key > arr[mid])
            s=mid+1;
        else
            e = mid -1;
    }
    // return -1;
    return ans;
}
int LastOccSearch(vector<int> &arr, int key, int n)
{
    int s = 0;
    int ans=-1;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
            {
                ans=mid;
                s=mid+1;
            }
        else if (key > arr[mid])
            s=mid+1;
        else
            e = mid -1;
    }
    return ans;
}
int main()
{
    vector<int> arr{1,2,3,4,4,4,4,4,4,4,5,6,7,8};
    int key = 4;
    int n = arr.size();
    int k1=firstOccSearch(arr, key, n);
   int k2=LastOccSearch(arr, key, n);
   cout<<"The Total Count of "<<key<<" is :"<<(k2-k1)+1;
    return 0;
}
