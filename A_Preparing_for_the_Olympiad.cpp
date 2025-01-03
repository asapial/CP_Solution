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
// vector<int>a(n),b(n);
// for(int i=0;i<n;i++)cin>>a[i];
// for(int i=0;i<n;i++)cin>>b[i];

// int ans=a[n-1];
// for(int i=0;i<n-1;i++)
// { 
//     if(a[i]>b[i+1])
//     {
//         ans+=a[i]-b[i+1];
//     }
// }
// cout<<ans<<endl;

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
    int t,a,b,n,i,sum1=0,sum2=0;
    // cin >> t;
    // for ( i = 0; i < t; i++)
    // {
        cin >> n;
        int a[n] ,b[n];
        for ( i = 0; i < n; i++)
        {
            cin >> a[i] ;
        }
        for (i=0;i<n;i++)
        {
            cin >> b[i] ;
        }
        for(i=0;i<n-1;i++)
        {
            if (a[i]>b[i+1]) {
                sum1 = sum1 + a[i];
                sum2 = sum2 + b[i+1];
            }
        }
    // }
    cout << sum1 - sum2 + a[n-1] << endl;
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