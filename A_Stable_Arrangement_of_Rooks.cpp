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
if (k > (n + 1) / 2)
{
    cout << -1<<endl;
    return;
}
vector<string> s(n, string(n, '.'));
for (int i = 0; i < k; i++)
    s[2 * i][2 * i] = 'R';
for (int i = 0; i < n; i++)
    cout << s[i] <<endl;

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