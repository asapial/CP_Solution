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
vector<int> primecheck(int n)
{
    vector<int>ans;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans.push_back(i);
            while(n%i==0)n/=i;
        }
    }
    if(n>1)
    {
        ans.push_back(n);
    }
    return ans;
}
void solve(){

int n;
cin>>n;
vector<int>a(n);
map<int,int>prime;
for(int i=0;i<n;i++)cin>>a[i];

vector<int>dp(n,0);
int ans=0;
for(int i=0;i<n;i++)
{
    vector<int>pc;
    pc=primecheck(a[i]);
    int dpVal=0;
    for(auto x:pc)
    {
        dpVal=max(dpVal,prime[x]);
    }
    for(auto x:pc)
    {
        prime[x]=dpVal+1;
    }

}

for(auto x:prime)
{
    ans=max(ans,x.second);
}
if(ans==0)ans++;
cout<<ans<<endl;
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