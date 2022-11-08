#include <bits/stdc++.h>
using namespace std;
int maxAscendingSum(vector<int> &nums)
{

    int max = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i + 1] > nums[i])
        {
            sum = sum + nums[i];
            
        }
        else
        {
            sum = sum + nums[i ];
            if (sum > max)
               {
                 max = sum;
                
               }
               sum=0;
        }
    }
    return max;
}
int main()
{
    vector<int> nums{5,5,6,6,6,9,1,2};
    cout<<maxAscendingSum(nums);
    return 0;
}