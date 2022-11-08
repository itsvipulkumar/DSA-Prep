#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> &nums, int key)
{
    int low = 0;
    int high = nums.size();
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (key == nums[mid])
            return mid;
        else if (key > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> nums{2,2};
    int key = 2;
    int k2 = 0;
    int k1 = BinarySearch(nums, key);
    if (nums[k1] == nums[k1 + 1])
        k2 = k1 + 1;
    else if (nums[k1] == nums[k1 - 1])
        k2 = k1 - 1;
        else if(k1==-1)
            k2=-1;
    cout << "[ " << k1 << "," << k2 << " ]" << endl;
    return 0;
}