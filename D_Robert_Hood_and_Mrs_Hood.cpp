#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
#define sync_clock chrono::steady_clock::now().time_since_epoch().count()
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(),(x).rend()
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
template<typename T> struct split64_hash { inline static uint64_t splitmix64(uint64_t x){
x = ((x += 0x9e3779b97f4a7c15) ^ ((x += 0x9e3779b97f4a7c15) >> 30)) * 0xbf58476d1ce4e5b9;
return ((x ^ (x >> 27)) * 0x94d049bb133111eb) ^ (((x ^ (x >> 27)) * 0x94d049bb133111eb) >> 31);
} inline size_t operator()(uint64_t x) const{static const uint64_t FIX = sync_clock; return splitmix64(x + FIX);}
};
template <typename T,typename V,typename U = int> using u_map = unordered_map<T, V, split64_hash <U>>;
template <typename T> using orset =  tree<T, null_type, less<T>,  rb_tree_tag,   tree_order_statistics_node_update>;
template <typename T, typename V> using ormap = tree<T, V, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> istream& operator>>(istream& is,  vector<T> &a){for (auto &x : a) is >> x;         return is;}
template <typename T> ostream& operator<<(ostream& os,  vector<T>  a){for (auto &x : a) os << x << ' ';  return os;}
template <typename T> ostream& operator<<(ostream& os,  set<T>  s){for (auto &x : s) os << x << ' ';     return os;}
template <typename T> ostream& operator<<(ostream& os,  multiset<T>  s){for (auto &x : s) os << x << ' ';return os;}
template <typename T, typename V> void operator+=(vector<T>& a, const V value) { for(auto &x : a)x += value; }
template <typename T, typename V> void operator-=(vector<T>& a, const V value) { for(auto &x : a)x -= value; }
template <typename T, typename V> void operator*=(vector<T>& a, const V value) { for(auto &x : a)x *= value; }
template <typename T, typename V> void operator/=(vector<T>& a, const V value) { for(auto &x : a)x /= value; }
template <typename T> void operator++(vector<T>& a) { a += 1; }
template <typename T> void operator--(vector<T>& a) { a -= 1; }
void solve(){

int n,d,k;
cin>>n>>d>>k;

vector<int>start(n+1,0),end(n+1,0);

for(int i=0;i<k;i++)
{
    int l,r;
    cin>>l>>r;
    start[l]++;
    end[r]++;
}

for(int i=1;i<=n;i++)
{
    start[i]+=start[i-1];
}
for(int i=1;i<=n;i++)
{
    end[i]+=end[i-1];
}
int mom_index=0,bro_index=0,mom_value=INT_MAX,bro_value=0;

for(int i=0;i<=n-d;i++)
{
    int val=start[i+d]-end[i];
    if(val>bro_value)
    {
        bro_index=i;
        bro_value=val;
    }

    if(val<mom_value)
    {
        mom_index=i;
        mom_value=val;
    }
}

cout<<++bro_index<<" "<<++mom_index<<endl;

return ;
}
bool test=1;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term=1;
if(test)cin>>term;
while(term--){
solve();
}
return 0;
}