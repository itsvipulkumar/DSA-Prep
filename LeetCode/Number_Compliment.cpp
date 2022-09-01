#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int mask = 0; // for count one which will equal to total bit

    while (mask < num)
    {
        mask = (mask << 1) | 1;
    }
    int ans = (~num) & mask;
    cout << ans;
}