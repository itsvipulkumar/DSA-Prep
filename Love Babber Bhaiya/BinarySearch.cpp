#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n,int k)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(k>arr[mid])
        {
            low=mid+1;
        }
        else 
        high=mid-1;
    }
}
int main()
{
    int arr[]={1,5,6,8,9,11,34,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=34;
    int ans=BinarySearch(arr,n,key);
    cout<<ans<<endl;
    return 0;
}