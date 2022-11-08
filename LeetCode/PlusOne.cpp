#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &digits)
{

    // 1234

    //    vector<int>ans;
    //     for(int i=digits.size()-1;i>=0;i--){
    //         if(digits[i]==9){
    //             digits[i] = 0;
    //         }
    //         else{
    //             digits[i]++;
    //             return digits;
    //         }
    //     }
    //     digits[0] = 1;
    //     digits.push_back(0);
    //     return digits;

    int n = digits.size() - 1;

    for (int i = n; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i] += 1;
            return digits;
        }
    }
    digits[0] = 1;
    digits.push_back(0);
    return digits;
    //  if(digits[n-1]<9)
    //  {
    //       digits[n-1]=  digits[n-1]+1;
    //  }
    //  else if(digits[n-1]>=9)
    //  digits[n-1]= 0;
    //  else
    //  {
    //     digits[n-2]=  digits[n-2]+1;
    //  }

    // return digits;
    //    for(int i=0;i<n;i++)
    // {
    //     cout<<digits[i]<<" ";
    // }
    // vector<int> v;
    // long int sum=0;
    //  for(int i=0;i<digits.size();i++)
    //  {
    //      sum=sum*10+digits[i];

    //  }

    // sum=sum+1;
    // cout<<"sum is "<<sum<<endl;
    // while(sum!=0)
    // {
    //     int rem=sum%10;
    //     v.push_back(rem);
    //     sum=sum/10;
    // }
    // reverse(v.begin(),v.end());
    // return v;
}
int main()
{
    vector<int> nums{9, 9};
    vector<int> vec;
    vec = plusOne(nums);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}