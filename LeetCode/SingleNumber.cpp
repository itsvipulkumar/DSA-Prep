#include <bits/stdc++.h>
using namespace std;

int singleNum(vector<int> &nums)
{
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        int currVal = nums[i];
        map[currVal]++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int currval = nums[i];
        if (map[currval] == 1)
            return currval;
    }
    return 0;
}
int main()
{

    vector<int> vec={ 4,1,2,1,2};
    int ans=singleNum(vec);
    cout<<ans;
}