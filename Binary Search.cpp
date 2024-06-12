#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int solve(int a[],int n, int left,int right){

if (left>right)
{
    return -1;
}
else
{   int mid=(left+right)/2;

    if (n==a[mid])
    {
        return mid+1;
    }
    else if (n>a[mid])
    {
        return solve(a,n,mid+1,right);
    }
    else
    {
        return solve(a,n,left,mid-1);
    }
    
}



}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term,num;
cin>>term;
cin>>num;

int a[term];
for (int i = 0; i < term; i++)
{
    cin>>a[i];
}

cout<<solve(a,num,0,term-1);

return 0;
}