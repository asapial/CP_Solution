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
int sum=0;

for(int i=0;i<s.size();i++)
{
    sum+=s[i]-'0';
}

int towcnt=count(s.begin(),s.end(),'2');
int threecnt=count(s.begin(),s.end(),'3');

for(int i=0;i<=towcnt;i++)
{
    for(int j=0;j<=threecnt;j++)
    {
        if((sum+(i*2)+(j*6))%9==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
}
cout<<"NO"<<endl;
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