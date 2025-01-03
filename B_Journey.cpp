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

int n, a, b, c;
cin >> n >> a >> b >> c;

int sum = a + b + c;
int d = (n / sum) * 3;

if (n % sum == 0) {
    cout << d << endl;
} else if (n % sum <= a) {
    cout << d + 1 << endl;
} else if (n % sum <= a + b) {
    cout << d + 2 << endl;
} else {
    cout << d + 3 << endl;
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


