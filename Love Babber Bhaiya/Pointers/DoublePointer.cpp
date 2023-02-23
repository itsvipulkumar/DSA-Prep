#include <bits/stdc++.h>
using namespace std;

void fun(int *arr)
{
    // cout << arr[0] << endl;

    *arr = *arr + 1;
}
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;

    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;

    cout << "\nAfter fun 1\n";

    fun(p);
    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;

    cout << "\nAfter fun 2\n";

    fun(*q);
    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;

    return 0;
}