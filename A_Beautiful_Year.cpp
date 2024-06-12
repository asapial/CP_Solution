#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll minl(ll a, ll b) { return (a > b ? b : a); }
ll maxl(ll a, ll b) { return (a < b ? b : a); }
int solve()
{

    return 0;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int term;
    cin >> term;
    int a,b,c,d;
    do
    {
        term++, a=term/1000,b=(term/100)%10,c=(term/10)%10,d=term%10;
    } while (a==b|| a==c || a==d || b==c || b==d || c==d);


    cout<<term<<endl;
    return 0;
}