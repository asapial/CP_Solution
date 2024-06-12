#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
string s;
cin>>s;

bool check=true;
int cnt=0;
if(s[0]>='0' and s[0]<='9')
{
  
    for(int i=0;i<n;i++)
    {
        if(s[i]>='0' and s[i]<='9')
        {
            cnt++;
        }
        else{
            break;
        }
    }

}

if(!is_sorted(s.begin(),s.begin()+cnt))
{
    cout<<"NO"<<endl;
    return;
}

if(!is_sorted(s.begin()+cnt,s.end()))
{
    cout<<"NO"<<endl;
    return;
}

cout<<"YES"<<endl;
return;
}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}