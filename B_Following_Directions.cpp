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
int num;
cin>>num;
string d;
cin>>d;
int x=0,y=0;
bool check= true;
for(int i=0;i<d.length();i++){


        if (d[i]=='U')
        {
            y++;
        }
        else if(d[i]=='D')
        {
            y--;
        }
        else if(d[i]=='L')
        {
            x--;
        }
        else if(d[i]=='R')
        {
            x++;
        }

    if (x==1 && y==1)
    {
        cout<<"YES"<<endl;
        check=false;
        break;
    }
   
}
    if (check)
    {
        cout<<"NO"<<endl;
    }
    
}
return 0;
}