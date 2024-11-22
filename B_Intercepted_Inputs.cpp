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
#define debug(x) cout<<#x<<" "<<x<<endl;
void solve(){

int k;
cin>>k;

map<int,int>m;

for(int i=0;i<k;i++)
{
    int num;
    cin>>num;
    m[num]++;
}


for(int i=1;i<=k-2;i++)
{
    if((k-2)%i==0)
    {
        if(m[i]!=0 and m[(k-2)/i]!=0)
        {
            cout<<i<<" "<<(k-2)/i<<endl;
            return;

        }
        else if(m[i]>=2 and i*i==(k-2)){
            cout<<i<<" "<<i<<endl;
            return;
            
        }
    }
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