#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, vector<int>& nums2) {
        for(int i=nums1.size();i>=0;i--)
        {
            if(nums1[i]==0)
            {
                nums1.pop_back();

            }
        }

        int n=nums1.size()+nums2.size();
        int n2=nums2.size();
        for(int i=0;i<n2;i++)
        {
            nums1.push_back(nums2[i]);
        }
    
        sort(nums1.begin(),nums1.end());
// n=nums1.size()+nums2.size();
   for(int i=0;i<nums1.size();i++)
   cout<<nums1[i]<<" ";

    }
int main()
{

    vector<int> nums1{1,2,3,0,0,0};
     vector<int> nums2 = {2,5,6};
   merge(nums1,nums2);
    return 0;
}