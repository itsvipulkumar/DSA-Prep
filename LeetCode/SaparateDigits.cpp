#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{13, 25, 83, 79};
    vector<int> vec;
    for (int i = 0; i < nums.size(); i++)
    {
        string str = to_string(nums[i]);
        // nums[i]+"";
        // cout << str << " ";
        for (int j = 0; j < str.length(); j++)
        {
            // cout << str[j] << " ";
            int ans = int(str[j]);

            vec.push_back(ans - 48);
        }
    }
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}
