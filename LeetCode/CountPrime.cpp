#include <bits/stdc++.h>
using namespace std;
int countPrimes(int n)
{
    int flag = 0;
    int c = 0;
    if (n == 0 || n == 1 || n == 2)
        return 0;
    for (int i = 2; i < n; i++)
    {
        int flag = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                flag++;
            }
            if (flag == 2)
                break;
        }
        if (flag == 1)
            c++;
           else if (flag == 2)
                break;
    }
    return c;
}
int main()
{
    int num = 500000;
    cout << countPrimes(num);
    return 0;
}