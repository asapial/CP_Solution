#   include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int c;
            cin>>c;
            for(int j=0;j<c;j++)
            {
                int x;
                cin>>x;
                if(mp[x]!=0)
                {
                    mp[x]=-1;
                }
                else mp[x]=i;
            }
        }
        int cnt=0;
        set<int>s;
        for(auto it:mp)
        {
            if(it.second!=-1)
            {
                s.insert(it.second);
            }
        }
        if(s.size()>=n)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
 