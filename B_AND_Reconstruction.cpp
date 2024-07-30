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
vector<int>a(n),b(n);

for(int i=1;i<n;i++)
{
    cin>>b[i];
}

a[0]=b[1];
a[n-1]=b[n-1];

for(int i=1;i<n-1;i++)
{
    a[i]=b[i]|b[i+1];
}

bool check=true;


for(int i=0;i<n-1;i++)
{
    check&= b[i+1]==(a[i]&a[i+1]);
}

if(check)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
else{
    cout<<-1<<endl;
    
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