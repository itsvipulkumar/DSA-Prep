#include <bits/stdc++.h>
using namespace std;
bool findElement(int nums[], int size, int ele)
{
    if (size == 0)
    {
        return false;
    }
    if (nums[0] == ele)
        return true;
    else
    {

        bool ans = findElement(nums + 1, size - 1, ele);
        return ans;
    }
}
int main()
{
    int nums[] = {1, 2, 3, 4, 6};
    int size = 5;
    int ele = 9;
    cout << findElement(nums, size, ele);
    return 0;
}