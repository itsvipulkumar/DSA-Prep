#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int flag = 0;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
        }
        else
            flag = 0;
    }
    if (flag == 1)
        cout << "Not Prime";
    else
        cout << "Prime";
    return 0;
}