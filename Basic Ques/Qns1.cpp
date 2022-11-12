#include<bits/stdc++.h>
using namespace std;
int * fun_arr()
{
    static int arr1[20];
    arr1[0]=1;
    arr1[1]=2;
    return arr1;
}
int main()
{
    int *ptr1=fun_arr();
    printf("%d %d ",ptr1[0],ptr1[1]);
    return 0;
}