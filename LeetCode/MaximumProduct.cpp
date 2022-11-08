#include <bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int> &nums)
{
    vector<int> vec;
    int c = 0;
    int m = 0;
    int ans = 0;
    int flag = 0;
    if (nums.size() <= 2)
    {
        return 0;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            vec.push_back(nums[i]);
            c++;
        }
        else
        {
            flag = 1;
        }
    }
    sort(vec.begin(), vec.end());
    cout<<"vec "<<endl;
    for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
  int s1 = vec.size();

    cout<<endl;

    cout<<vec[s1 - 1] ;cout<< vec[s1 - 2] ;cout<< vec[s1 - 3];
  
    sort(nums.begin(), nums.end());
    int n = nums.size();
    if (c >= 2 && flag>=1)
    {
        m = vec[0] * vec[1];
        int result = m * nums[n - 1];
        return result;
    }
    if (flag == 0)
    {
        int sum = (vec[s1 - 1] * vec[s1 - 2] * vec[s1 - 3]);
        return sum;
    }
    else if (flag == 1)
    {

        ans = nums[n - 1] * nums[n - 2] * nums[n - 3];
    }

    return ans;
}
int main()
{
    vector<int> nums{-1,-2,-3,-4};
    cout<<maximumProduct(nums);

    return 0;
}