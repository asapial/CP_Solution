#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){


return 0;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
while(term--){
int num;
cin>>num;
int a[num];
for(int i=0;i<num;i++)
{
    cin>>a[i];
}

int l=0,r=num-1,min=1,max=num;

while(l<=r)
{
    if (a[l]==min)
    {
        min++;
        l++;
    }
    else if (a[l]==max)
    {
        max--;
        l++;
    }
    else if(a[r]==max)
    {
        r--;
        max--;
    }
    else if(a[r]==min)
    {
        min++;
        r--;
    }
    else
    {
        break;
    }


    
}

if (l<=r)
{
    cout<<++l<<" "<<++r<<endl;
}
else
{
    cout<<-1<<endl;
}

}
return 0;
}