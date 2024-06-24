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
string s;
int rendere(char a,char b)
{
    return ((a-'0')*10)+(b-'0');
}

void solve(){

int n;

cin>>n>>s;

if((count(all(s),'0')>0 and n>3))
{
    cout<<0<<endl;
    return;
}
else
{
    if(n==2)
    {
        cout<<rendere(s[0],s[1])<<endl;
        return;
    }
    else if(n==3)
    {
        cout<<min({rendere(s[0],s[1])+s[2]-'0',s[0]-'0'+rendere(s[1],s[2]),rendere(s[0],s[1])*(s[2]-'0'),(s[0]-'0')*rendere(s[1],s[2])})<<endl;
        return;
    }
    else
    {   
        int ans=INT_MAX;

        int it1=0,it2=1;

        while(it2<n)
        {
            int sum=0;

            for(int i=0;i<n;i++)
            {
                if(i!=it1 and i!=it2 and s[i]!='1')
                {
                    sum+=s[i]-'0';
                }
            }

            ans=min(ans,(sum+(rendere(s[it1],s[it2]))));
            it1++;
            it2++;
        }

        cout<<ans<<endl;
    }

}



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