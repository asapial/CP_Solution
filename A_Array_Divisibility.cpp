
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
    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        array[i] = (i + 1) * (i + 2);
    }
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}