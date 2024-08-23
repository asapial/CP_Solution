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
int q(int a,int b)
{
    cout<<"? "<<a<<" "<<b<<endl;
    int num;
    cin>>num;
    return num;
}
void solve(){

int n;
cin>>n;

vector<pair<int,int>>ans;

for(int i=2;i<=n;i++)
{
    int mid=1;
    while(true)
    {
        int x=q(i,mid);
        if(x==i)
        {
            ans.push_back({i,mid});
            break;
        }
        else
        {
            mid=x;
        }
    }
}

cout<<"! ";
for(auto x:ans)
{
    cout<<x.first<<" "<<x.second<<" ";
}
cout<<endl;
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

