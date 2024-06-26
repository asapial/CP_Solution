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

string s[8];
int white=0,black=0;


map<char,int>mp;

mp['q'] = 9;
mp['r'] = 5;
mp['b'] = 3;
mp['n'] = 3;
mp['p'] = 1;
mp['k'] = 0;

for(int i=0;i<8;i++)
{
    cin>>s[i];
}

for(int i=0;i<8;i++)
{
    for(int j=0;j<8;j++)
    {
        if(s[i][j]>='A' and s[i][j]<='Z')
        {
            white+=mp[tolower(s[i][j])];
        }
        else
        {
            black+=mp[tolower(s[i][j])];
        }
    }
}

if(white>black)
{
    cout<<"White";
    return;
}
else if(black>white)
{
    cout<<"Black";
    return;
}
else
{
    cout<<"Draw";
    return;
}


}

int main(){


solve();

return 0;
}