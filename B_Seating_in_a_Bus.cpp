// #include <bits/stdc++.h>
// using namespace std;
// #define   Pi     2*acos(0.0)
// #define   ll     long long
// #define   pb     push_back
// #define   mp     make_pair
// #define   MAX    500006
// #define   MAX1   10000008
// #define   mem(a,v)   memset(a,v,sizeof(a))
// #define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
// void solve(){

// int n;
// cin>>n;
// vector<int>a(2e5+5),b(2e5+5);


// for(int i=1;i<=n;i++)
// {
//     cin>>a[i];
//     b[a[i]]=i;
// }

// for(int i=a[1]+1;i<=n;i++)
// {
//     if(b[i-1]>b[i])
//     {
//         cout<<"NO"<<endl;
//         return;
//     }
// }
// for(int i=a[1]-1;i>0;i--)
// {
//     if(b[i+1]>b[i])
//     {
//         cout<<"NO"<<endl;
//         return;
//     }
// }

// cout<<"YES"<<endl;


// }

// bool test=1;
// int main(){
// ios::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// // freopen("input.txt", "r",stdin);
// // freopen("output.txt", "w",stdout);
// int term=1;
// if(test)cin>>term;
// while(term--){
// solve();
// }
// return 0;
// }


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
vector<int>a(n+1);

for(int  i=1;i<=n;i++)
{
    cin>>a[i];
}

vector<int>ans(n+2,-1);

ans[a[1]]=1;
for(int i=2;i<=n;i++)
{
    if(ans[a[i]+1]!=-1 or ans[a[i]-1]!=-1)
    {
        ans[a[i]]=i;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }


}

cout<<"YES"<<endl;



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