#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(vector<int> &nums)
{
    int n = nums.size();
    int min;
    for (int i = 0; i < n; i++)
    {
        min=i;
        for (int j = i; j < n; j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }
        if (min != -1)
        {
            swap(&nums[i], &nums[min]);
             //min=INT_MAX;
        }
       
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    vector<int> nums{4, 5, 1, 7, 8, 12, 34, 10};
    selectionSort(nums);
    return 0;
}