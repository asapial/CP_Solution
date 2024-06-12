#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(),(x).rend()
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
string s;
cin>>s;

int a[s.length()+1];a[0]=0;
int count=0;
for(int i=1;i<s.length();i++)
{
    if(s[i]==s[i-1])
    {
        count++;
    }
        a[i]=count;

    
}

int n;
cin>>n;
while(n--)
{
    int l,r;
    cin>>l>>r;
    cout<<a[r-1]-a[l-1]<<endl;

}
return 0;
}