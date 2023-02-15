#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "babbarq";
    string b = "raabbb";
    int flag = 0;
    unordered_map<char, int> mp;

    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        mp[ch]++;
        // cout << ch << " '";
        // cout << mp[ch] << endl;
    }
    for (int i = 0; i < b.length(); i++)
    {
        char ch = b[i];
        mp[ch]--;
        // cout << ch << " '";
        // cout << mp[ch] << endl;
    }
    for (int i = 0; i < a.length(); i++)
    {
        if (mp[a[i]] != 0)
        {
            cout << "Not Anagram ! ";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Anagram ";

    // std::unordered_map<char, int>::iterator it = mp.begin();
    //  while(it!=mp.end())
    //  {
    //     cout<<it->first<<" "<< it->second<<endl;

    //  }
}