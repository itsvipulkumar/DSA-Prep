#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 3, 5, 12, 19, 20};

    int arr[11];
    int i = 0, j = 0;
    int k = 0;
    while (i < 4 || j < 7)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            // cout << arr[k] << " ";
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            // cout << arr[k] << " ";
            j++;
            k++;
        }
    }
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    return 0;
}