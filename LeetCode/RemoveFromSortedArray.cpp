#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n1 = nums.size();

    set<int> s(nums.begin(), nums.end());
    int n2 = s.size();
    nums.clear();
    vector<int> vec(s.begin(), s.end());

    // vector<int> nums(s.begin(), s.end());

    for (int i = 0; i < vec.size(); i++)
    {
        nums.push_back(vec[i]);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }

    cout << endl;
    return n2;
}
int main()
{

    vector<int> v{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(v);
    return 0;
}