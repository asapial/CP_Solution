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
#define   debug(x) cout<<#x<<" "<<x<<endl;
void solve(){
string a,b;
cin>>a>>b;


int n=a.size();
int m=b.size();

int ans=n+m;


for(int i=0;i<m;i++)
{   int match=i;

    for(int j=0;j<n;j++)
    {
        if(match<m and a[j]==b[match])
        {
            match++;
        }
    }

    // debug(match);
    ans=min(ans,n+m-(match-i));
}

cout<<ans<<endl;

}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}