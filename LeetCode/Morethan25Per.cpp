#include <bits/stdc++.h>
using namespace std;
int findSpecialInteger(vector<int> &arr)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        int val = arr[i];
        mp[val]++;
    }
    int flag = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int val = arr[i];
        float a = mp[val];
        float b = arr.size();
        float ans = a / b * 100;
        cout << ans << endl;
        // if (ans >= 25)
        // {
        //     return val;
        //     flag = 1;
        //     break;
        // }
    }
    if (flag == 0)
    {
        return -1;
    }
}
int main()
{
    vector<int> nums{1, 2, 3, 3};
    cout << findSpecialInteger(nums);
    return 0;
}