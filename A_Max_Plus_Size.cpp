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
int num;
int odd_count=0,odd_value=0,even_count=0,even_value=0;
for(int i=0;i<n;i++)
{
    cin>>num;

    if(i&1)
    {
        odd_count++;
        odd_value=max(odd_value,num);
    }
    else
    {
        even_count++;
        even_value=max(even_value,num);
    }


}

cout<<max((odd_count+odd_value),(even_count+even_value))<<endl;


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