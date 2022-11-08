#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{

    int zeroCount = 0, oneCount = 0, twoCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            zeroCount++;
        else if (nums[i] == 1)
            oneCount++;
        else if (nums[i] == 2)
            twoCount++;
    }
    nums.clear();
cout<<"size of nums : "<<nums.size()<<endl;
cout<<"size of 1 : "<<zeroCount<<endl;
cout<<"size of 2 : "<<oneCount<<endl;
cout<<"size of 3 : "<<twoCount<<endl;
    while (zeroCount != 0)
    {
        nums.push_back(0);
        zeroCount--;
    }
    while (oneCount != 0)
    {
        nums.push_back(1);
        oneCount--;
    }
    while (twoCount != 0)
    {
        nums.push_back(2);
        twoCount--;
    }

    for(int i=0;i<nums.size();i++)
    cout<<nums[i]<<" ";
}
int main()
{
    vector<int> nums{2,0,2,1,1,0,0};
    sortColors(nums);

   
}