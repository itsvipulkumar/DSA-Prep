#include<bits/stdc++.h>
using namespace std;
int find1stOCC(int arr[],int n,int k)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans= mid;
            e=mid-1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else 
        e=mid-1;
    }
    return ans;
}
int main()
{
    int arr[]={1,5,5,6,7,7};
int k=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<find1stOCC(arr,n,k);
    return 0;
}