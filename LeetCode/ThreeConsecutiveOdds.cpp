#include <bits/stdc++.h>
using namespace std;
bool threeConsecutiveOdds(vector<int> &arr)
{
    int c = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 != 0)
        {
            c++;
            if (c == 3)
                break;
        }

        if (arr[i] % 2 == 0 && c > 0)
        {
            c--;
        }
    }
    if (c == 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    vector<int> arr{1, 2, 34, 3, 4, 5, 7, 23, 12};
     cout<< threeConsecutiveOdds(arr);
    return 0;
}