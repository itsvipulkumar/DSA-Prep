#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int currVal = nums[i];
        mp[currVal]++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int currVal = nums[i];
        if (mp[currVal] >= 2)
        {
            nums[i] = currVal;
            nums[i + 1] = currVal;
        }
        else if (mp[currVal] == 1)
        {
            nums[i] = currVal;
        }
    }

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
}
int main()
{
    vector<int> nums{1, 1, 1, 2, 2, 3};
    int ans = removeDuplicates(nums);
    cout << ans << endl;
    return 0;
}