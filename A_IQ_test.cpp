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



}

int main(){

int n;
cin>>n;

int odd_count=0,even_count=0,odd_index=0,even_index=0;


for(int i=0;i<n;i++)
{
    int num;
    cin>>num;

    (num%2?odd_count++:even_count++);
    (num%2?odd_index=i+1:even_index=i+1);


}
    if(odd_count==1)
    {
        cout<<odd_index<<endl;
    }
    else
    {
        cout<<even_index<<endl;
    }
return 0;
}