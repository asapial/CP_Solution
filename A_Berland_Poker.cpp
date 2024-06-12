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
ll card_num,joker_num,player_num;

cin>>card_num>>joker_num>>player_num;
ll card_in_one_hand=card_num/player_num;

if (card_in_one_hand>=joker_num)
{
    cout<<joker_num<<endl;
}
else
{
     double other_case=player_num-1;

    ll other_hand_card=ceil((joker_num-card_in_one_hand)/other_case);
    cout<<card_in_one_hand-other_hand_card<<endl;
}




}
return 0;
}