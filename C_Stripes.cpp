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
int flag=0;
for (int i = 0; i < 8; i++)
{
    string s;
    cin>>s; 

    flag|= s=="RRRRRRRR";
}

cout<<(flag?"R\n":"B\n");

}
return 0;
}