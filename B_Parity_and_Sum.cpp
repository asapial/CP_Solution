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

int n;
cin>>n;
vector<ll>a(n);

vector<ll>odd,even;

for(int i=0;i<n;i++)
{
    cin>>a[i];

    if(a[i]%2)
    {
        odd.push_back(a[i]);
    }
    else
    {
        even.push_back(a[i]);
    }
}

if(odd.size()==0 or even.size()==0)
{
    cout<<0<<endl;
    return;
}
sort(odd.begin(),odd.end());
sort(even.begin(),even.end());
ll last=odd.back();

for(int i=0;i<even.size();i++)
{
    if(even[i]>last)
    {
        cout<<even.size()+1<<endl;
        return;
    }
    else
    {
        last+=even[i];
    }
}

cout<<even.size()<<endl;
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