#include <bits/stdc++.h>
using namespace std;
#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define debug(x) cout<<#x<<" "<<x<<endl;
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
void solve(){

int l,r,L,R;
cin>>l>>r>>L>>R;

if(L>r or l>R)
{
    cout<<1<<endl;
    return;
}

if(L<l)
{
    swap(l,L);
    swap(r,R);
}

int ans=0;
map<int,int>m;

for(int i=l;i<=r;i++)
{
    m[i]++;
}
for(int i=L;i<=R;i++)
{
    m[i]++;
}

int left=-1;
int right=-1;

for(int i=1;i<=100;i++)
{
    if(m[i]==2)
    {
        ans++;
        if(left==-1)
        {
            left=i;
        }
        right=i;
    }
}

debug(ans);
if(min({l,r,L,R})<left){
    ans++;
}

if(max({l,r,L,R})>right){
    ans++;
}

cout<<--ans<<endl;
}

bool test=1;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
// freopen("input.txt", "right",stdin);
// freopen("output.txt", "w",stdout);
int term=1;
if(test)cin>>term;
while(term--){
solve();
}
return 0;
}