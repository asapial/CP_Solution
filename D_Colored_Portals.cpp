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

bool two_check(string a, string b) {
    return a[0] == b[0] || a[0] == b[1] || a[1] == b[0] || a[1] == b[1];
}
 
bool three_check(string s, string e, string m) {
    return (s[0] == m[0] && e[0] == m[1]) || 
           (s[0] == m[0] && e[1] == m[1]) || 
           (s[1] == m[0] && e[0] == m[1]) || 
           (s[1] == m[0] && e[1] == m[1]) || 
           (s[0] == m[1] && e[0] == m[0]) || 
           (s[0] == m[1] && e[1] == m[0]) || 
           (s[1] == m[1] && e[0] == m[0]) || 
           (s[1] == m[1] && e[1] == m[0]);
}
void solve(){

int n,k;
cin>>n>>k;

string v[]={"BG", "BR", "BY", "GR", "GY","RY"};
string s[n];

map<string,vector<int>>m;

for(int i=0;i<n;i++)
{
  cin>>s[i];
  m[s[i]].push_back(i);
}


while(k--)
{
  int l,r;
  cin>>l>>r;
  l--;
  r--;
  if(l==r)
  {
    cout<<0<<endl;
    continue;
  }

  if(two_check(s[l],s[r]))
  {
    cout<<abs(l-r)<<endl;
    continue;
  }
  if(l>r)swap(l,r);
  int ans=INT_MAX;
  for(int i=0;i<6;i++)
  { string c=v[i];
    if(c!=s[l] and c!=s[r] and three_check(s[l],s[r],c))
    {
        auto it=upper_bound(m[c].begin(),m[c].end(),l)-m[c].begin();
        if(it<m[c].size())
        {
          ans=min(ans,abs(l-m[c][it])+abs(r-m[c][it]));
        }

        if(it>0)
        {
          it--;
          ans=min(ans,abs(l-m[c][it])+abs(r-m[c][it]));
        }
    }
  }

  cout<<(ans==INT_MAX?-1:ans)<<endl;
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
