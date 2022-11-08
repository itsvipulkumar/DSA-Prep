// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//          int n1=1;
//         int n2=2;
//          int size=n1>n2?n1:n2;
//          cout<<size<<endl;
// }

#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    int size = n1 <n2 ? n1 : n2;
    vector<int> vec;
    int count = 0;
    if (size == n1)
    {
        for (int i = 0; i < n1; i++)
        {
            int k = nums1[i];
            int ans = std::count(nums2.begin(), nums2.end(), k);
            if (ans >= 1)
            {
                vec.push_back(k);
            }
        }
    }
    else if (size == n2)
    {
        for (int i = 0; i < n2; i++)
        {
            int k = nums2[i];
            int ans = std::count(nums1.begin(), nums1.end(), k);
            if (ans >= 1)
            {
                vec.push_back(k);
            }
        }
    }
    return vec;
}
int main()
{
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    vector<int> vec;
    vec = intersect(nums1, nums2);
    for (auto i : vec)
        cout << i << " ";
    return 0;
}
