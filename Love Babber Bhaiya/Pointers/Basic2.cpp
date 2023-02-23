#include <bits/stdc++.h>
using namespace std;
void fun(int *arr)
{
    // cout << arr[0] << endl;
    cout << sizeof(arr) << endl;
    cout << *arr + 1 << endl;
}
int main()
{
    // int arr[] = {1, 2, 3};

    // cout << arr << endl;
    // char ch = 'a';

    // char *chr = &ch;
    // cout << &chr << endl;
    // cout << *chr << endl;
    // cout << sizeof(chr) << endl;
    // fun(arr);

    // char ch[5] = "abcd";

    // char *ptr = ch;
    // cout << ch << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << ptr << endl; // priting char array values until it read thr null character
    // cout << ch << endl;

    char ch2 = 'C';
    char *ptr2 = &ch2;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
    cout << &ch2 << endl;

    if (1)
    {
        cout << "Vipul" << endl;
    }
    else
    {
        cout << "Chauhan" << endl;
    }
}