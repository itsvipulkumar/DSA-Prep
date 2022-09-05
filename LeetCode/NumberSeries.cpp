#include<bits/stdc++.h>
using namespace std;
int findNth(int n){
        // code here
        int cfour=1;
        if(n%2!=0)
        return 0;
       else if(n%4==0)
        {
            for(int i=4;i<n;i++)
        {
            
            if(i%4==0)
            {
                cfour++;
            }
            
        }
        return cfour;
        
        }
        else 
        return 1;
    }
int main()
{
    int n=8;
    cout<<findNth(n)<<endl;
    return 0;
}