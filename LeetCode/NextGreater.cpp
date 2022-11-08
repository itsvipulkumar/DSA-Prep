#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{

    int ind;
    int n1 = nums1.size();

    int n2 = nums2.size();

    vector<int> vec;
    for (int i = 0; i < nums1.size(); i++)
    {
        int a = nums1[i];
  
        std::vector<int>::iterator it;
        it = std::find(nums2.begin(), nums2.end(), a);
       cout<<"it : "<<*it<<" ";
        int k = it - nums2.begin();
        cout << "index : " << k << endl;
        for (int j = k+1; j < nums2.size(); j++)
        {

            cout << "arr : " << nums2[j] << endl; //  1, 3, 4, 2
            if (nums2[j] > a)
            {

                vec.push_back(nums2[j]);
                continue;
            }

            else
                vec.push_back(-1);
        }
    }
    // if (nums1[n1 - 1] == nums2[n2 - 1])
    //     vec.push_back(-1);
    // cout<<nums1[n1-1]<<endl;
    // cout<<nums1[n2-1]<<endl;
    return vec;
}
int main()
{
    vector<int> nums1{4, 1, 2};
    vector<int> nums2{1, 3, 4, 2};
    vector<int> ans;
    ans = nextGreaterElement(nums1, nums2);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}