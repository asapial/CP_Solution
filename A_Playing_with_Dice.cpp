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

int a,b,w,d,l;
w=0;
d=0;
l=0;
cin>>a>>b;
for(int i=1;i<7;i++){
    if(abs(a-i)>abs(b-i))l++;
    else if(abs(a-i)==abs(b-i))d++;
else w++;
}
cout<<w<<" "<<d<<" "<<l;

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