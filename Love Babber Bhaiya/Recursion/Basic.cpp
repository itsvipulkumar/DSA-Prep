#include <bits/stdc++.h>
using namespace std;

// int fact(int n)
// {
//     int ans = 0;
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     ans = n * fact(n - 1);
//     return ans;
// }
// void counting(int n, int a)
// {
//     if (n > a)
//     {
//         return;
//     }
//     cout << n << " ";
//     counting(n + 1, a);
// }
int findMaxnum(vector<int> &nums, int n, int i)
{

    int i = 1;
    int max = nums[0] > nums[i] ? nums[0] : nums[i];
    if (i > n)
    {
        return max;
    }
    findMaxnum(nums, n, i++);
    return -1;
}
int main()
{
    int n = 5;
    vector<int> nums{4, 2, 6, 9, 1, 0, 12};
    // cout << fact(n);
    // counting(1, n);
    int size = nums.size();
    cout << findMaxnum(nums, size, 0);

    // int max = nums[0] > nums[1] ? nums[0] : nums[1];
    // cout << max;
    return 0;
}