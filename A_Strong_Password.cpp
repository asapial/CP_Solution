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
if(s.size()==1)
{
    s+=(s[0]=='a'?'b':'a');
    cout<<s<<endl;
    return;
}



for(int i=1;i<s.size();i++)
{
    if(s[i]==s[i-1])
    {
        cout<<s.substr(0,i);
        cout<<(s[i]=='a'?'b':'a');
        cout<<s.substr(i,s.size()-i+1)<<endl;
        return;
    }
}

cout<<(s[0]=='a'?'b':'a');
cout<<s<<endl;

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