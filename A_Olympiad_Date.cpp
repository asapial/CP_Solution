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

map<int,int> mp;
int n;
int f=0;
cin>>n;
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    
    mp[x]++;
    if(mp[0]>=3&&mp[1]>=1&&mp[3]>=1&&mp[2]>=2&&mp[5]>=1&&f==0){
        f=1;
        cout<<i<<"\n";
    }
}
if(!f)cout<<0<<"\n";

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