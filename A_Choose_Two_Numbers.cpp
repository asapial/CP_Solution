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

int n, m, maxx = 0, maxy = 0;
cin>>n;
int x;
for(int i = 0; i < n; i++){
    cin>>x;
    maxx = x > maxx ? x : maxx;
}
cin>>m;
for(int i = 0; i < m; i++){
    cin>>x;
    maxy = x > maxy ? x : maxy;
}
cout<<maxx<<" "<<maxy<<endl;

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