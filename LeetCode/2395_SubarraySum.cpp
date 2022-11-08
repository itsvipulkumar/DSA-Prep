#include<bits/stdc++.h>
using namespace std;
 bool findSubarrays(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int sum=nums[i]+nums[i+1];
            vec.push_back(sum);
        }
        
         for(int i=0;i<vec.size();i++)
        {
            int currVal=vec[i];
            mp[currVal]++;
        }
        
        for(int i=0;i<vec.size();i++)
        {
            int currVal=vec[i];
            if(mp[currVal]==2)
                return true;
        }
        return false;
    }
int main()
{
    vector<int> nums{85,22,5,40};
    cout<<findSubarrays(nums);
    return 0;
}