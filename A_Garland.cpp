#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a,ll b){return (a>b?b:a);}
ll maxl(ll a,ll b){return (a<b?b:a);}
int solve(){


return 0;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int term;
cin>>term;
while(term--){
int n=4;
int count[10];
memset(count, 0, 10*sizeof(int));
while(n--)
{
    char c;
    cin>>c;
    count[c-'0']++;


}

int max=*max_element(count,count+10);

if (max==3)
{
    cout<<6<<endl;
}
else if (max==4)
{
    cout<<-1<<endl;
}
else
{
    cout<<4<<endl;
}

}
return 0;
}