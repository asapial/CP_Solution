#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
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
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
sort(a,a+n);
bool found = true;
for (int i = 0; i < n-1; i++)
{
    if (a[i]==a[i+1])
    {
        cout<<"NO"<<endl;
        found = false;
        break;
    }
    
}

if (found)
{
    cout<<"YES"<<endl;
}

}
return 0;
}