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
string a,b;
 cin>>a>>b;
bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if ((a[i]==b[i])||(a[i]=='G' && b[i]=='B')|| (a[i]=='B'&& b[i]=='G'))
        {
            ok=true;
        }
        else
        {
            ok=false;
            cout<<"NO"<<endl;
            break;
        }
        
    }
    if(ok)
    {
        cout<<"YES"<<endl;
    }
    
}
return 0;
}