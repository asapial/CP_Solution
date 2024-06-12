#include<iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
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
int r[26];
for (int i = 0; i < 26; i++)
{
    r[i]=0;
}

int n;
cin>>n;
string s;
cin>>s;

int count = 0;

for (int i = 0; i < n; i++)
{
    if (r[s[i]-'A']==0)
    {
        count+=2;
        r[s[i]-'A']=1;
    }
    else
    {
        count++;
    }
    
}

cout<<count<<endl;
}


return 0;
}