// #include <bits/stdc++.h>
// using namespace std;
// #define   Pi     2*acos(0.0)
// #define   ll     long long
// #define   pb     push_back
// #define   mp     make_pair
// #define   MAX    500006
// #define   MAX1   10000008
// #define   mem(a,v)   memset(a,v,sizeof(a))
// #define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     vector<pair<int, int>> points;
//     for (int i = 0; i < n; ++i) {
//         string row;
//         cin >> row;
//         for (int j = 0; j < m; ++j) {
//             if (row[j] == '#') {
//                 points.emplace_back(i + 1, j + 1);
//             }
//         }
//     }

//     long long sum_x = 0, sum_y = 0;
//     int num_points = points.size();
//     for (const auto& p : points) {
//         sum_x += p.first;
//         sum_y += p.second;
//     }

//     int center_x = sum_x / num_points;
//     int center_y = sum_y / num_points;

//     cout << center_x << " " << center_y << endl;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


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


int n,m;
cin>>n>>m;
string s[n];

for(int i=0;i<n;i++)
{
    cin>>s[i];


}


int start=0,end=0,cnt=0,y=0;

for(int i=0;i<n;i++)
{
    if(count(all(s[i]),'#')>cnt)
    {
        y=i+1;
        cnt=count(all(s[i]),'#');
        start=find(all(s[i]),'#')-s[i].begin();
        reverse(all(s[i]));
        end=m-(find(all(s[i]),'#')-s[i].begin());
    }
    // cout<<start<<" "<<end<<" "<<cnt<<endl;
}
cout<<y<<" "<<ceil((end+start)/2.0)<<endl;
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