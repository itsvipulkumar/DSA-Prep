#include <bits/stdc++.h>
using namespace std;
int PeakElement(vector<int> &nums)
{
    int s = 0;
    int e = nums.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] < nums[mid + 1])
            s = mid + 1;
        else
            e = mid;
    }
    return s;
}
int main()
{
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    cout << PeakElement(nums);
    return 0;
}