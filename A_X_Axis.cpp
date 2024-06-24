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

 int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        
        vector<int> points = {x1, x2, x3};
        sort(points.begin(), points.end());
        
        int median = points[1];
        
        int total_distance = abs(median - points[0]) + abs(median - points[1]) + abs(median - points[2]);
        
        cout << total_distance << endl;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}