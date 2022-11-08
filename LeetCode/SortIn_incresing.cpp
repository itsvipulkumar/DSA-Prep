#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec{1,1,2,2,2,3};
    set<int> st;
      
    map<int,int> mp;
    for(int i=0;i<vec.size();i++)
    {
        int x=vec[i];
        mp[x]++;
    }
    for(int i=0;i<vec.size();i++)
    {
          int x=vec[i];
          cout<<mp[x]<<" :  "<<x<<" ";
          

          st.insert(mp[x]);

    }
    cout<<"\n\n\n";
    set<int> ::iterator itr;
    for(itr=st.begin();itr!=st.end();++itr)
    {
        cout<<*itr<<" ";
    }
    // st.sort();
}