#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    // return a ;
}
int main()
{
    int a = 68, b = 119;
    cout << GCD(a, b);
    return 0;
}