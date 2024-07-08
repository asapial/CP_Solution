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
int n,x,a;
 cin>>n>>x;
        int b[204]={0};
        while (n--) cin>>a,b[a]=1;
        int i;
        for (i=1; x>0 || b[i]!=0; i++) if (b[i]==0) x--;
        cout<<i-1<<endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}