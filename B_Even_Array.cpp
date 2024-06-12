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
int a,b;
a=b=0;

for (int  i = 0; i < num; i++)
{
    int n;
    cin>>n;

    if (n%2!=i%2)
    {
        if (i%2)
        {
            a++;
        }
        else
        {
            b++;
        }
        
    }
    

}


if (a!=b)
{
    cout<<-1<<endl;
}
else
{
    cout<<a<<endl;
}

}
return 0;
}