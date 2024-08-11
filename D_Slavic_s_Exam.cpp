#include <bits/stdc++.h>
using namespace std;
#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
void solve(){

string s,t;
cin>>s>>t;

int n=s.size(),m=t.size();

int j=0;
for(int i=0;i<n;i++)
{
    if(s[i]==t[j])
    {
        j++;
    }
    else if(s[i]=='?')
    {
        s[i]=t[j];
        j++;
    }
    if(j==m)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                s[i]='a';
            }
        }
        cout<<"YES"<<endl;
        cout<<s<<endl;
        return;
    }
}

cout<<"NO"<<endl;

}

bool test=1;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
// freopen("input.txt", "r",stdin);
// freopen("output.txt", "w",stdout);
int term=1;
if(test)cin>>term;
while(term--){
solve();
}
return 0;
}