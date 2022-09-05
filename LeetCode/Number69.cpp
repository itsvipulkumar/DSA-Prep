#include <bits/stdc++.h>
using namespace std;

int maximum69Number(int num)
{

    cout << num << endl;
    int rem = num % 10;
    int i = 0;
    if (rem == 9)
    {
        rem = 6;
        num = num << 1 | rem;
    }

    // binary to decimal
    cout<<num;
int dec=0;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
    // int arr[20];
    // while(num!=0)
    // {
    //     int rem=num%10;
    //     if(rem==6)
    //     {
    //         rem=9;
    //         num=num<<1 | rem;

    //     }
    //     else if(rem==9)
    //     {
    //         rem=6;
    //     }
    // }
    // return rem;
}
int main()

{
    int num = 9669;
    cout << maximum69Number(num);
    return 0;
}