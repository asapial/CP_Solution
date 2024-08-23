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
int q(int a,int b)
{
    cout<<"? "<<a<<" "<<b<<endl;
    fflush(stdout);
    int num;
    cin>>num;
    return --num;
}
void solve(){

int n;
cin>>n;

vector<int>a(n+1,-1);



for(int i=1;i<=n;i++)
{
    int mid=1;

    do
    {
        int x=q(i,mid);
        if(x==i) 
        {
            break;
        }
        mid=x;
    }while(true);
    a[i]=mid;
}

cout<<"! ";
for(int i=1;i<=n;i++)
{
    cout<<a[i]<<" "<<i+1<<" ";
}
cout<<endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}