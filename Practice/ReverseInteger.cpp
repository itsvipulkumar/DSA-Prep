#include <bits/stdc++.h>
using namespace std;
void reverseArr(int arr[], int n1, int n2)
{
    int size = n2;
    while (n1 < n2)
    {
        int temp = arr[n1];
        arr[n1] = arr[n2];
        arr[n2] = temp;
        n1++;
        n2--;
    }
    for (int i = 0; i <= size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArr(arr, 0, n - 1);
    return 0;
}