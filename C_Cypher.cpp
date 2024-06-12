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
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}

for (int i = 0; i < n; i++)
{
    int b;
    cin>>b;
    for (int j = 0; j < b; j++)
    {
        char s;
        cin>>s;

        if (s=='D')
        {
            (a[i]++);
        }
        else
        {
            (a[i]--);
            if (a[i]<0)
            {
                a[i]+=10;
            }
            
        }
        
    }
    
}


for (int i = 0; i < n; i++)
{
    cout<<(a[i]%10)<<" ";
}
cout<<endl;
}
return 0;
}