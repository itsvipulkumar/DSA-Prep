#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> mp;
    // set<int> s(arr.begin(),arr.end());
    // int n=s.size();
    vector<int> vec;
    for (int i = 0; i < arr.size(); i++)
    {
        int currVal = arr[i];
        mp[currVal]++;
    }
    set<int> s(arr.begin(), arr.end());
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it)
    {
        int currVal = *it;
        vec.push_back(mp[currVal]);
    }

    set<int> newS(vec.begin(), vec.end());

    if (newS.size() == s.size())
        return true;
    else
        return false;
}
int main()
{
    vector<int> nums{1, 2, 2, 3, 3, 3, 4};
    cout << uniqueOccurrences(nums);
    return 0;
}