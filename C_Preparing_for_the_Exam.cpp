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
int n, m, k;
cin >> n >> m >> k; 

vector<int> a(m); 
for (int i = 0; i < m; ++i) {
    cin >> a[i];
}

vector<int> q(k); 
vector<pair<int, bool>> used(n + 1, {0, false}); 
for (int i = 0; i < k; ++i) {
    cin >> q[i];
    used[q[i]].second = true; 
}

int l = q.size(); 
for (int i = 0; i < m; ++i) {
    if (l == n || (l == n - 1 && !used[a[i]].second)) {
        cout << "1";
    } else {
        cout << "0";
    }
}
cout<<endl;

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