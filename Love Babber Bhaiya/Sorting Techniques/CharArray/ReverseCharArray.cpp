#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[12] = "VipulKumar";
    int len = strlen(arr);
    int i = 0;
    int j = len - 1;
    cout << "Before Swapped " << arr << endl;
    while (i <=j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "After Swapped " << arr << endl;
}