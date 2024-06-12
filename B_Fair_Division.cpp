// #include<iostream>
// #include <bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// ll minl(ll a,ll b){return (a>b?b:a);}
// ll maxl(ll a,ll b){return (a<b?b:a);}
// int solve(){


// return 0;
// }
// int main(){
// ios::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// int term;
// cin>>term;
// while(term--){
// int n;
// cin>>n;

// int one ,two;one=two=0;
// for (int i = 0; i < n; i++)
// {
//     int num;
//     cin>>num;
    
//     if (num%2)
//     {
//         one++;
//     }
//     else
//     {
//         two++;
//     }
    

// }


// if (one%2 || (two%2 && one<2))
// {
//     cout<<"NO"<<endl;
// }
// else
// {
//     cout<<"YES"<<endl;
// }


// }
// return 0;
// }

#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        int arr[a];
        for(int j=0;j<a;j++)
        {
            cin>>arr[j];
        }
            int sum1=0,sum2=0;
            int arr1[a/2];
            int arr2[a/2];
            for(int j=0;j<a/2;j++)
            {
                arr1[a/2]=arr[j];
                sum1+=arr[j];
            }
            for(int j=a/2;j<a;j++)
            {
                arr2[a/2]=arr[j];
                sum2+=arr[j];
            }   
            if(sum1==sum2) 
            {
                cout<<"YES"<<endl;
            }
            else
            {
              cout<<"NO"<<endl;
            }
        }
    
    return 0;
}