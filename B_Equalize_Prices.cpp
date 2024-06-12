#include <bits/stdc++.h>
using namespace std;
void solve(){

int n,k ;
cin>>n>>k;
vector<int>a(n);

for(auto &x:a)
{
    cin>>x;
}

int mini=*min_element(a.begin(),a.end());

int maxi=*max_element(a.begin(),a.end());


if(maxi-mini>2*k)
{
    cout<<-1<<endl;

}
else
{
    cout<<mini+k<<endl;
}

}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}