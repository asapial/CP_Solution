#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
string main="314159265358979323846264338327";
string str;
cin>>str;

int count = 0;

for (int i = 0; i < sizeof(str); i++)
{
    if (str[i]==main[i])
    {
        count++;
    }
    else
    {
        break;
    }
}

cout<<min(count,30)<<endl;


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