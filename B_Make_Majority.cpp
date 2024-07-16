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
string s;
cin>>s;

int count_gap=0,count_0=0,count_1=0;

for(int i=0;i<n;i++)
{
    if(s[i]=='1')
    {
        count_1++;
        if(count_gap)
        {
            count_gap=0;
            count_0++;
        }
    }
    else
    {
        count_gap++;
    }
}

if(count_gap)
{
    count_0++;
}

if(count_0<count_1)
{
    cout<<"Yes"<<endl;

}
else
{
    cout<<"No"<<endl;
}
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}