// C++ program to demonstrate
// Implementation of erase() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums{1,2,3,4,5,6,7};
    vector<int>::iterator it1, it2;
    int n = nums.size();
    vector<int> temp;
    int k = 3;
    // k = k + 1;
    // for (int i = k+1; i < n; i++)
    //     temp.push_back(nums[i]);

    // it1 = nums.begin() + k+1;
    // it2 = nums.end() + 0;
    // nums.erase(it1, it2);
    //  cout<<endl<<k<<endl;
    // Printing the Vector
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     nums.push_back(temp[i]);
    // }
    int p = k;
    while (p != 0)
    {
        temp.push_back(nums[n - p]);
        p--;
        nums.pop_back();
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = temp.size()-1; i>=0; i--)
    {
        // nums.push_back(temp[i]);
        nums.insert(nums.begin(),temp[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
