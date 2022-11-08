#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int maxProduct(vector<int> &nums)
{
    int lar = 0;
    int ans1=0,ans2=0;
    if (nums.size() == 1)
        return nums[0];

    // int max(int aint b)
    for (int i = 0; i < nums.size(); i++)
    {
        int ans1 = nums[i] * nums[i];
        if (i < nums.size() - 1)
            int ans2 = nums[i] * nums[i + 1];
        int result = max(ans1, ans2);
        cout << "Ans 1 " << ans1 << endl;
        cout << "Ans 2 " << ans2 << endl;
        cout << result << endl;
        if (result > lar)
            lar = result;
    }
    return lar;
}
int main()
{
    vector<int> nums{0, 2};
    int ans = maxProduct(nums);
    cout << ans;
    return 0;
}