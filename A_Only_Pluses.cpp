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

  int a, b, c;
        cin >> a >> b >> c;

        int maxBananas = 0;

        // Try all combinations of adding from 0 to 5 to a, b, and c
        for (int i = 0; i <= 5; ++i) {
            for (int j = 0; j <= 5 - i; ++j) {
                int k = 5 - i - j;
                int newA = a + i;
                int newB = b + j;
                int newC = c + k;
                int product = newA * newB * newC;
                maxBananas = max(maxBananas, product);
            }
        }

        cout << maxBananas << endl;


}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}
