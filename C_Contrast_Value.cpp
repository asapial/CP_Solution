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
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    n = unique(a.begin(), a.end()) - a.begin();
    int ans = n;
    for (int i = 0; i + 2 < n; ++i) {
      ans -= (a[i] < a[i + 1] && a[i + 1] < a[i + 2]);
      ans -= (a[i] > a[i + 1] && a[i + 1] > a[i + 2]);
    }
    cout << ans <<endl;

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