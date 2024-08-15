#include <bits/stdc++.h>
using namespace std;
#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
void solve(){


	int a,b,max=0,ans;
    cin>>a>>b;
		for(int i=a;i<=b;i++){
			int max1=0,min1=9,j=i,r;while(j>0){r=j%10;if(r>max1)max1=r;if(r<min1)min1=r;j/=10;}
			if(max1-min1>=max){max=max1-min1;ans=i;};if(max==9)break;
		}
		cout<<ans<<endl;

}

int main(){

int t;
cin>>t;
while(t--){
solve();
}
return 0;
}