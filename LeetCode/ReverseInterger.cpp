#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    // brute force approach
    long int sum = 0;
    int c = 0;
    int flag = 0;
    // for negative numbers
    if (x < 0)

    {
        x = -x;
        flag = 1;
    }
    while (x != 0)
    {
        int rem = x % 10;
        sum = sum * 10 + rem;
        c++;
        x = x / 10;
    }
    if (sum > INT_MAX || sum < INT_MIN)
        return 0;
    sum = flag ? (-sum) : sum;
    return sum;
}
int main()
{
    int n = -135;
    cout << reverse(n);
}