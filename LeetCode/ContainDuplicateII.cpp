#include <bits/stdc++.h>
using namespace std;

void containsNearbyDuplicate(vector<int> &nums, int k)
{
    // set<int> st(nums.begin(),nums.end());

    // int ans=sts
vector<int> v2;
    unordered_map<int, int> mp;
    int ele;
    for (int i = 0; i < nums.size(); i++)
    {
        int indx = nums[i];
        mp[indx]++;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        int indx = nums[i];
        if (mp[indx] >=2)
        {
            //cout<<indx<<endl;
            v2.push_back(indx);
            ele=indx;
        }
    }

    for(int i=0;i<v2.size();i++)
    cout<<v2.at(i)<<" ";
}
int main()
{
    vector<int> vec{1, 2, 3, 1};
    int k = 3;
   containsNearbyDuplicate(vec, k);
}
