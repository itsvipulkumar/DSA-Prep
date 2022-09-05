#include <bits/stdc++.h>
using namespace std;
int main()

{
    int num = 25;
    int flag=num;
int rem=num%10;
    if(rem==5)
    {
       rem=9;
    }
    num=((num<<1 )| rem)- flag;
    cout<<num;
    return 0;
}