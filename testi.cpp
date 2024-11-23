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

int t=6+n/2;

int star=1;
int space=t-1;
int star_print,space_print;
for(int i=1;i<=t;i++)
{
    star_print=star;
    space_print=space;

    while (space_print--)
    {
        cout<<" ";
    }
    while(star_print--)
    {
        cout<<"*";
    }
    cout<<endl;
    star+=2;
    space--;
    
}
space=(star/2)-(n/2);
space--;
// space/=2;

star=n;



for(int i=0;i<5;i++)
{
    space_print=space;
    star_print=star;

    while (space_print--)
    {
        cout<<" ";
    }
    while(star_print--)
    {
        cout<<"*";
    }
    cout<<endl;
    
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