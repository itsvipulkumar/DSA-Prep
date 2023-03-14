#include <bits/stdc++.h>
using namespace std;
void Printfibo(int i, int a, int b, int n)
{
    // cout << a << " ";
    if (i >= n)
    {
        return;
    }
    int c = a + b;
    cout << c << " ";
    a = b;
    b = c;
    Printfibo(i = i + 1, a, b, n);
}
int nthFiboNum(int n)
{

    if (n <= 1)
    {
        return n;
    }
    int ans = nthFiboNum(n - 1) + nthFiboNum(n - 2);
    return ans;
}
int main()
{
    int a = 0, b = 1;
    int count = 1;
    int n = 8;
    // cout << a << " " << b << " ";
    // Printfibo(1, a, b, n);
    cout << nthFiboNum(n);
    return 0;
}
