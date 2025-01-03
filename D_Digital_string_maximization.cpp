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

for(int i=0;i<s.size();i++ )
{
    int maxi=s[i]-'0';
    int ind=i;

    for(int j=i;j<min(i+10,(int)s.size());j++)
    {
        if(maxi<(s[j]-'0'-j+i))
        {
            maxi=s[j]-'0'-j+i;
            ind=j;
        }
    }
    while(ind>i)
    {
        swap(s[ind],s[ind-1]);
        ind--;
    }
    s[i]=char('0'+maxi);
}
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