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

int n, m, r, c;
cin >> n >> m >> r >> c;
r--; c--;
string a[n];

bool black = false;
for (int i = 0; i < n; i++) {
    cin>>a[i];
    for (int j = 0; j < m; j++) {
        black |= (a[i][j] == 'B');
    }
}
if (!black){
    cout << -1 <<endl;
    return;
}
if (a[r][c] == 'B') {
    cout << 0 << endl; 
    return;
}

bool move = false;
for (int i = 0; i < n; i++) {
    move |= (a[i][c] == 'B');
}
for (int j = 0; j < m; j++) {
    move |= (a[r][j] == 'B');
}
if (move) {
    cout << 1 << endl;
}
else {
    cout << 2 << endl;
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