#include<iostream>
using namespace std;
int powerofTwo(int num)
{
    int flag=0;
    if(num==1)
    {
        return true;
    }
    else{
        while(num>1)
        {
            if(num%2==0)
            {
                flag=true;
            }
            else 
            return false;

            num=num/2;
        }
    }
    return flag;
    
}
int main()
{
    int num=5;
    int ans=powerofTwo(num);
    cout<<ans<<endl;
    return 0;

}