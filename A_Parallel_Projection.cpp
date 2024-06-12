#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){


int w, d, h;
    cin >> w >> d >> h;
    int a, b;
    cin >> a >> b;
    int f, g;
    cin >> f >> g;
    int ans = b + abs(a - f) + g;
    ans = min(ans, a + abs(b - g) + f);
    ans = min(ans, (d - b) + abs(a - f) + (d - g));
    ans = min(ans, (w - a) + abs(b - g) + (w - f));
    cout << ans + h << '\n';
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
while(term--){
solve();
}
return 0;
}