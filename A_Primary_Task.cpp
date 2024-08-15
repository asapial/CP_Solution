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

if(s.size()<3)
{
    cout<<"NO"<<endl;
    return;
}
if(s[0]=='1' and s[1]=='0')
{
        if(s[2]!='0')
        {
            if(s.size()==3)
            {
                if(s[2]>'1')
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
             else
                {
                    cout<<"YES"<<endl;
                }
        }
        else
        {

            cout<<"NO"<<endl;
            return;

        }
}
else
{
    cout<<"NO"<<endl;
    return;
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