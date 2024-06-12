#include <bits/stdc++.h>
using namespace std;
void solve(){

int n,m;
cin>>n>>m;
string s;
cin>>s;
map<char,int>a;

for(int i=0;i<n;i++)
{
    a[s[i]]++;

}

int ans=0;
for(char c='A';c<='G';c++)
{
    if(a[c]<m)
    {
        ans+=(m-a[c]);
    }
}
cout<<ans<<endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}