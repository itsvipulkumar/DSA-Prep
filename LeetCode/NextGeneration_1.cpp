#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{

    int ind;
    vector<int> vec;
    for (int i = 0; i < nums1.size(); i++)
    {
        int a = nums1[i];

        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums2[j] == a)
            {
                if (nums2[j + 1] > a)
                    vec.push_back(nums2[j + 1]);
                else
                    vec.push_back(-1);
            }
        }
    }
    return vec;
}
int main()
{
    vector<int> nums1{4, 1, 2};
    vector<int> nums2{1, 3, 4, 2};
    vector<int> ans;
    ans = nextGreaterElement(nums1, nums2);
    //    nums1 = [4,1,2], nums2 = [1,3,4,2]
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}