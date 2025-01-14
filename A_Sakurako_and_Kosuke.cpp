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

int x = 0;
int c = 1;

while (-n <= x && x <= n) {
    if (c % 2 == 1) {
        x -= 2 * c - 1;
    } else {
        x += 2 * c - 1;
    }
    c++;
}

if (c % 2 == 0) {
    cout << "Sakurako" << endl;
} else {
    cout << "Kosuke" << endl;
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