#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{

    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    int size = 0;
    vector<int> vec;
    // first map for get nums2 value
    for (int i = 0; i < nums1.size(); i++) // 4 9 5
    {
        int currVal = nums1[i];
        m1[currVal]++;
    }
    // second map for get nums2 value
    for (int i = 0; i < nums2.size(); i++) // 9, 4, 9, 8, 4
    {
        int currVal = nums2[i];
        m2[currVal]++;
    }

    int n1 = nums1.size();
    int n2 = nums2.size();
    if (n1 > n2)
        size = n1;
    else
        size = n2;

    set<int> st;
    for (int i = 0; i < size; i++)
    {

        int val_1 = nums1[i];
        int val_2 = nums2[i];
        if(val_1==val_2)
            st.insert(val_1);
    }

    vector<int> ans(st.begin(), st.end());
    return ans;
}
int main()
{

    vector<int> nums1{4, 9, 5};
    vector<int> nums2{9, 4, 9, 8, 4};

    vector<int> ans;
    ans = intersection(nums2, nums2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}