
#include <bits/stdc++.h>
using namespace std;
int value(vector<int> &nums, int n, int amt, int currIndex)
{
    if (amt == 0)
        return 1;
    if (amt < 0)
        return 0;

    int ways = 0;
    for (int i = currIndex; i < n; i++)
    {
        ways += value(nums, n, amt - nums[i], i);
    }
    return ways;
}

int main()
{
    vector<int> nums{1, 2};
    int amt = 4;
    int n = nums.size();

    cout << value(nums, n, amt, 0);
    return 0;
}