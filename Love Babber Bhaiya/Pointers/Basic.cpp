#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << *ptr << endl;
    cout << sizeof(ptr) << endl;

    int b = 0;
    int *pt = 0;
    // cout << *pt << endl;

    cout << "Pointer c start \n";
    int c = 5;
    int *p = &c;

    cout << c << endl;
    cout << &c << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;

    int arr[] = {1, 2, 3};

    cout << arr << endl;
    cout << arr + 1 << endl;
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << &arr << endl;
    cout << arr[0] << endl;
    cout << 1 [arr] << endl;
}