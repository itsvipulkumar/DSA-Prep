#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 2;
    int sum = 0, sum_new = 0, i=0;
    while (num != 0)
    {
        int rem = num % 2;
        cout << rem << " ";
        if (rem == 0)
            rem = 1;
        else
            rem = 0;
        sum = sum * 10 + rem;
        num = num / 2;
    }
    cout << endl;
    cout << sum<<endl;

    while (sum != 0)
    {
        int rem = sum % 10;
        sum_new = sum_new+ rem * pow(2, i);
        i++;
        sum=sum/10;
    }
cout<<sum_new<<endl;
    return 0;
}