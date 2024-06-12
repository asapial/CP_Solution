// #include<iostream>
// #include <bits/stdc++.h>
// typedef long long ll;
// #define sz(x) ((int)x.size())
// #define forn(i, n) for (int i = 0; i < int(n); i++)
// #define fornr(i, n) for (int i =int (n)-1; i >=0 ; i--)
// using namespace std;
// ll minl(ll a,ll b){return (a>b?b:a);}
// ll maxl(ll a,ll b){return (a<b?b:a);}
// void in(int n,int a[]){forn(i,n)cin>>a[i];}
// void inl(ll n,ll a[]){forn(i,n)cin>>a[i];}
// int solve(){


// return 0;
// }
// int main(){
// ios::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// int num;
// cin>>num;
// int max=0,min=101,max_index,min_index;
// for (int i = 0; i < num; i++)
// {
//     int n;
//     cin>>n;
//     if (max<n)
//     {
//         max=n;max_index=i;
//     }

//     if (min>=n)
//     {
//         min=n;
//         min_index=i;
//     }
    
    
// }


// cout<<max_index+num-min_index-1-(max_index>min_index)<<endl;
// return 0;
// }

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,count;
    cin>>n;
    int arr[n];
    int minimum=INT_MAX,minposition=0;
    int maximum=0,maxposition=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maximum)
        {
        maximum=arr[i];
        maxposition=i;
        }
        for(int i=0;i<n;i++)
        if(arr[i]<=minimum)
        {
        minimum=arr[i];
        minposition=i;
        }

    }
     if(maxposition<minposition)
     {
        count=maxposition+(n-1-minposition);
     }
     else
     {
        count=maxposition+(n-1-minposition)-1;
     }

    cout<<count<<endl;
    
    
    return 0;    
}