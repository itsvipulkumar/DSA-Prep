#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 2, 4, 3, 2};
    vector<int> vec;
    // int arr[] = {1, 2, 4, 3, 2};
    int n = v.size();
    std::replace(v.begin(), v.end(), 2, -1);

    // replace(v,begin(), v.end(), 2, -1);
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            vec.push_back(v[i]);
            k++;
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\nK : " << k;
}