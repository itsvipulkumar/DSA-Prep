#include <bits/stdc++.h>
using namespace std;
int main()
{

    string a = "11";
    string b = "1";
    int n1 = stoi(a);
    int n2 = stoi(b);
    int rem;
    int i = 0;
    int sum1 = 0, sum2 = 0;
    while (n1 != 0)
    {
        rem = n1 % 10;

        sum1 += rem * (pow(2, i));
        i++;
        n1 = n1 / 10;
    }
    rem = 0;
    i = 0;
    while (n2 != 0)
    {
        int rem = n2 % 10;

        sum2 += rem * (pow(2, i));
        i++;
        n2 = n2 / 10;
    }

    cout << sum1 << endl;
    cout << sum2 << endl;

    return 0;
}