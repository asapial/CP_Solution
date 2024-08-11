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

int n;
cin>>n;
string s[2];
cin>>s[0]>>s[1];

int ans=0;

for(int i=1;i<n-1;i++)
{
    bool check=true;

    check&=(s[0][i]=='.' and s[1][i]=='.');
    check&=(s[0][i-1]!=s[1][i-1]);
    check&=(s[0][i+1]!=s[1][i+1]);
    check&=(s[0][i-1]==s[0][i+1]);
    ans+=check;

}

cout<<ans<<endl;
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