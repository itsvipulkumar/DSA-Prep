#include<bits/stdc++.h>
using namespace std;
 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        
          ////unordered_map<int,int> m1;
          //unordered_map<int,int> m2;
        int size=0;
        
      
        unordered_set<int> s1;
        unordered_set<int> s2;
        unordered_set<int> ans;
        //set<int> s2;
       unordered_set<int>:: iterator it;
       for(it=s1.begin();it!=s1.end();++it)
       {
           if(s1.count(*it)==1)
           {
               ans.insert(*it);
           }
       }
        for(it=s2.begin();it!=s2.end();++it)
       {
           if(s2.count(*it)==1)
           {
               ans.insert(*it);
           }
       }
       

        vector<int> vec(ans.begin(),ans.end());
        return vec;
    }
int main()
{
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};
    vector<int> v;
    v=intersection(nums1,nums2);
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    return 0;
}