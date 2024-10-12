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
string a,b;
cin>>a>>b;


vector<vector<int>>aa(26,vector<int>(n,0));
vector<vector<int>>bb(26,vector<int>(n,0));


for(int i=0;i<n;i++)
{
    aa[a[i]-'a'][i]=1;
    bb[b[i]-'a'][i]=1;
}

for(int i=0;i<26;i++)
{
    for(int j=1;j<n;j++)
    {
        aa[i][j]+=aa[i][j-1];
        bb[i][j]+=bb[i][j-1];
    }
}

int q;
cin>>q;
while(q--)
{
    int l,r;
    cin>>l>>r;
    l--;r--;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        int s=(aa[i][r]-(l==0?0:aa[i][l-1]));
        int t=(bb[i][r]-(l==0?0:bb[i][l-1]));
        ans+=abs(s-t);

    }
    cout<<ans<<endl;
}
}

bool test=0;
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