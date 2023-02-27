#include <bits/stdc++.h>
using namespace std;

int findExpo(int num)
{
    if (num == 0)
    {
        return 1;
    }
    int a = findExpo(num / 2);
    if (num & 1)
    {
        return a = a * a * 2;
    }
    else
        return a = a * a;
}
int main()
{
    int n = 10;
    cout << findExpo(n);
    return 0;
}