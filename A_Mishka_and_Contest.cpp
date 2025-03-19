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
int n,s;
cin>>n>>s;
vector<int>a(n+1);
for(int i=1;i<=n;i++){
    cin>>a[i];
}
int l=1,r=n;
while(l<=n&&a[l]<=s){
    l++;
}
while(r>=1&&a[r]<=s){
    r--;
}
if(l==n+1) cout<<n<<endl;
else cout<<n-r+l-1<<endl; 

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