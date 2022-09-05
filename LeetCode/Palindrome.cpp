#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        int sum=0;
        int flag=x;
        int tt=0;
        if(x<0)
        {
            x=-x;
            tt=1;
        }
        while(x!=0)
        {
            int rem=x%10;
            sum=sum*10+rem;
            x=x/10;
        }
          sum=tt?(-sum):sum;
        if(flag==sum)
            return true;
        else
            return false;
       
    }
int main()
{
     cout<<isPalindrome(-121);
    return 0;
}