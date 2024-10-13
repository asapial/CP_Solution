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

string s;
cin>>s;
int n=s.size();
int one=0,zero=0;;

for(int i=0;i<n;i++)
{
    if(s[i]=='0')zero++;
    else one++;
}

int ans=0;

for(int i=0;i<n;i++)
{
    if(s[i]=='0')
    {
        if(one>0)
        {
            one--;
            
        }
        else{
            cout<<zero<<endl;
            return;
        }
    }

    if(s[i]=='1')
    {   
        if(zero>0)
        {
            zero--;
            
        }
        else{
            cout<<one<<endl;
            return;
        }
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