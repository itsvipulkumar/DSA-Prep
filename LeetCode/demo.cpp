#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st{1, 2,2,1,3,2,2,};
    set<int>:: iterator it;
    unordered_set<int> ans;
    for(it=st.begin();it!=st.end();++it)
    {
        // cout<<st.count(*it)<<" ";
        if(st.count(*it)==1)
        {
            ans.insert(*it);
        }
    }
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    // for (int i = 0; i < st.size(); i++)
    // {
    //     cout << st[i] << " ";
    // }
}