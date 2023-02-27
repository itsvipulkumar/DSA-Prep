// fun maximum
#include <bits/stdc++.h>
using namespace std;

int maxnumber(vector<int> &nums, int max, int i, int n)
{
    // int i = 0;
    if (i >= n)
    {
        return max;
    }
    max = nums[i] > max ? nums[i] : max;
    cout << max << " ";
    maxnumber(nums, max, i = i + 1, n);
}
int main()
{
    vector<int> nums{1, 5, 67, 4, 89, 50};
    int size = nums.size();
    int max = nums[0];
    cout << "Maximum numner is: " << maxnumber(nums, max, 1, size);
}