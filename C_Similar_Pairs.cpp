#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
#define all(x)     (x).begin(), (x).end()
#define rall(x)    (x).rbegin(),(x).rend()
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){
int n;
cin>>n;
int odd, even;
odd=even=0;
vector<int> v;

for(int i=0;i<n;i++)
{
    int num;
    cin>>num;
    v.push_back(num);
    if(num%2)
    {
        odd++;
        
    }
    else{
        even++;

    }
}

if(even%2!=odd%2)
{
    cout<<"NO"<<endl;
    return 0;

}
else{
    if(even%2==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else{

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[i]%2 != v[j]%2 &&abs(v[i]-v[j])==1)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
}

cout<<"NO"<<endl;
return 0;
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