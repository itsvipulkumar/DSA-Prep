#include<bits/stdc++.h>
using namespace std;
int main()
{
    // creation the char array 

    char arr[10]="Vipul";
char arr1[10]="Aman";
char arr2[10]="Aman";
    // cin>>arr;  
    cout<<arr;
    cout<<endl<<"Length of char arr : "<<strlen(arr)<<endl; // count the len of char array

    cout<<strcmp(arr1,arr2)<<endl; // compare wo char array 

    cout<<strcpy(arr,arr1)<<endl; // copy one char array to another

    cout<<arr<<endl;
    return 0;
}