#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    // find factorial
    int sum = 1;
    for (int i = n; i >= 1; i--)
    {
        sum = sum * i;
    }
    cout << "Factorial is : " << sum << endl;
    return 0;
}