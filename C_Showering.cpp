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

int n,s,m;
cin>>n>>s>>m;


int last=0;
bool check=0;
while(n--)
{

    int l,r;
    cin>>l>>r;
    if((l-last)>=s)check=1;
    last=r;
}

if((m-last)>=s)check=1;

if(check)
{
    cout<<"YES\n";

}
else
{
    cout<<"NO\n";
 
}


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