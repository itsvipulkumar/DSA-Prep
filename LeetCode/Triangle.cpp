#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr{{-1},{2,3},{1,-1,-3}};
    int n = arr.size();
    int min = INT_MIN;
    int sum = 0;
    int flag = 0;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        flag=0;
        vector<int> v(arr[i].begin(), arr[i].end());
        min = v[0];
        for (int j = 0; j < v.size(); j++)
        {

            if (v[j] < min)
            {
                min = v[j];
                flag = 1;
            }
               
        }
               vec.push_back(min);
                sum = sum + min;
        // if (flag == 0)
        // {
        //     sum = sum + v[0];
        //     vec.push_back(v[0]);
        // }

    }
    for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
    cout<<endl;
    cout<<sum<<endl;

    return 0;
}