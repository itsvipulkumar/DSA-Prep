#include <bits/stdc++.h>
using namespace std;
int findLucky(vector<int> &arr)
{
    unordered_map<int, int> m;
    int max = 0;
    int temp;
    for (int i = 0; i < arr.size(); i++)
    {
        int currVal = arr[i];
        m[currVal]++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int currVal = arr[i];

        if (m[currVal] == currVal)
        {
            int flag = currVal;
          temp=1;
            // cout << "currval : " << currVal << endl;
            if (flag > max)
            {
                max = flag;
                // cout << "max = " << max << endl;
            }
            // return max;
        }
        // return max;
    }
    if(temp==1)
    return max;
    else
    return -1;
}
int main()
{

    vector<int> nums{2,2,2,3,3};
    int ans = findLucky(nums);
    cout << ans << " ";
    return 0;
}