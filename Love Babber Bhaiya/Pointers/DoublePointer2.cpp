#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};

    int *p = arr;
    cout << *p << endl;
    cout << arr << endl;

    char b[] = "xyz";

    char *c = &b[0];

    cout << c << endl;
}