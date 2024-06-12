//s == no of edges in component
//t==edges int the component
#include<bits/stdc++.h>
using namespace std;
int ans,n,m,s,t;
vector<int>e[100001];
char visited[100001];
void dfs(int i) {
 visited[i]=1;
 ++s;t+=e[i].size();
 for(auto x:e[i])if(!visited[x])dfs(x);
}
int main() {
 scanf("%d%d",&n,&m);
 while(m--)scanf("%d%d",&s,&t),e[s].push_back(t),e[t].push_back(s);
 for(int i=1;i<=n;++i)if(!visited[i]){
  s=t=0;
  dfs(i);
  ans+=s>t/2;
 }
 printf("%d\n",ans);
}