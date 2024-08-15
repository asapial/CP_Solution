// #include <bits/stdc++.h>
// using namespace std;
// #define   Pi     2*acos(0.0)
// #define   ll     long long
// #define   pb     push_back
// #define   mp     make_pair
// #define   MAX    500006
// #define   M    2e5+5
// #define   MAX1   10000008
// #define   mem(a,v)   memset(a,v,sizeof(a))
// #define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
// void solve() {
//     int n;
//     cin >> n;
//     vector<int>a(M),cnt(M),lettercheck(M);
//     for (int i = 1; i <= n; i++) 
//         cin >> a[i];

//     int m;
//     cin >> m;
//     for (int i = 1; i <= m; i++) {
//         string q;
//         cin >> q;
//         map<int,int>p;
//         if (q.size() != n) {
//             cout << "NO" << '\n';
//             continue;
//         }

//         for (int i = 0; i <= 26; i++) {
//             lettercheck[i] = false;
//         }

//         bool ok = true;
//         for (int i = 0; i < n; i++) {
//             int d = q[i] - 'a';
//             if (!lettercheck[d]) {
//                 if (p[a[i + 1]]) ok = false;
//                 p[a[i + 1]] = true;
//                 lettercheck[d] = true;
//                 cnt[d] = a[i + 1];
//             }
//             ok &= (cnt[d] == a[i + 1]);
//         }

//         if (ok) {
//             cout << "YES" << '\n';
//         } else {
//             cout << "NO" << '\n';
//         }
//     }
// }


// bool test=1;
// int main(){
// ios::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// // freopen("input.txt", "r",stdin);
// // freopen("output.txt", "w",stdout);
// int term=1;
// if(test)cin>>term;
// while(term--){
// solve();
// }
// return 0;
// }





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
vector<ll>a(n);

for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int m;
cin>>m;

while(m--)
{
    string s;
    cin>>s;
    if(s.size()!=n)
    {
        cout<<"NO"<<endl;
        continue;
    }

    map<char,bool>m;
    map<char,ll>val;
    map<ll,char>check;
    for(char c='a'; c <= 'z'; c++)
    {
        m[c]=false;
    }
  for(int i=0;i<n;i++)
  {
    check[a[i]]='#';
  }



    for(int i=0;i<n;i++)
    {
        if(!m[s[i]])
        {
            val[s[i]]=a[i];
            if(check[a[i]]!='#' and check[a[i]]!=s[i])
            {
                cout<<"NO"<<endl;
                goto out;
            }
            check[a[i]]=s[i];
            m[s[i]]=true;
        }
        else
        {
            if(val[s[i]]!=a[i] ) 
            {
                cout<<"NO"<<endl;
                goto out;
            }

        }
    }

    cout<<"YES"<<endl;
    out:
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