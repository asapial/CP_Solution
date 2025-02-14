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


int n, k;
cin >> n >> k;
set<int> el;
vector<int> ans;
for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (!el.count(x)) {
        ans.push_back(i);
        el.insert(x);
    }
}

if (int(ans.size()) < k) {
    cout << "NO\n";
} else {
    cout << "YES\n";
    for (int i = 0; i < k; ++i)
        cout << ans[i] + 1 << " ";
    cout << endl;
}
}

bool test=0;
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