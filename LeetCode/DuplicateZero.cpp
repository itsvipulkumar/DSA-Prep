#include <bits/stdc++.h>
using namespace std;
void duplicateZeros(vector<int> &arr)
{
    int n = arr.size();
    vector<int> vec;
    // cout << n << endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            vec.push_back(arr[i]);

        }
        else if(arr[i]==0)
        {
            vec.push_back(0);
            vec.push_back(0);

        }
    }
    arr.clear();
    for(int i=0;i<n;i++)
    {
        arr[i]=vec[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    // 2nd methods

    // vector<int> vec(arr.begin(), arr.end());
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if (vec[i] != 0)
    //     {
    //         arr[i] = arr[i];
    //     }
    //     else if (vec[i] == 0)
    //     {
    //         arr[i] = 0;
    //         arr[i + 1] = 0;
    //     }
    // }

    //  for(int i=0;i<arr.size();i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    //  for(int i=0;i<arr.size();i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
}
int main()
{
    vector<int> nums{1, 0, 2, 3, 0, 4, 5, 0};
    duplicateZeros(nums);
    return 0;
}
