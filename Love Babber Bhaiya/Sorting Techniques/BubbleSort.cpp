#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j + 1] < nums[j])
            {
                swap(nums[j + 1], nums[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
}
int main()
{
    vector<int> nums{1, 4, -5, 10, 23, 7};
    bubbleSort(nums);
    return 0;
}