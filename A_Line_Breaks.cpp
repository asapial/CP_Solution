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

int n,m;
cin>>n>>m;
vector<int>a(n);

for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    a[i]=s.size();
}
// sort(a.begin(),a.end());

int ans=0;
int sumtext=0;

for(int i=0;i<n;i++)
{   
    sumtext+=a[i];
    if(sumtext<=m)
    {
        ans++;
    }
    else{
        break;
    }

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