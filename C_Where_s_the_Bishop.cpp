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

char s[8][8];

for (int i = 0; i < 8; i++)
{
    for (int j = 0; j < 8; j++)
    {
        cin>>s[i][j];
    }
    
}

int x,y;
for (int i = 0; i < 8; i++)
{
    for (int j = 0; j < 8; j++)
    {
        if (s[i][j]=='#' && s[i-1][j-1]=='#' && s[i-1][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j+1]=='#' )
        {
            x=i;
            y=j;
        }
        
    }
    
}

cout<<x+1<<" "<<y+1<<endl;

}
return 0;
}