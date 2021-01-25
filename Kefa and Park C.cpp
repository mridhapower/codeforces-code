#include<bits/stdc++.h>
using namespace std;
const int MAX=10e5+10;
vector<int> tree[MAX];
int cat[MAX],visit[MAX];
int n,m,r=0;
int dfs(int u=1)
{
    if(u!=1 && tree[u].size()==1)r++;
    for(int i=0;i<tree[u].size();i++){
        int v=tree[u][i];
        if(!visit[v]){
            visit[v]=1;
            if(cat[v])cat[v]+=cat[u];
            if(cat[v]<=m)dfs(v);
        }
    }
}

int main()
{
    int u,v,i;
    cin>>n>>m;
    for(i=1;i<=n;i++)cin>>cat[i];
    for(i=0;i<n-1;i++)
    {
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    visit[1]=1;
    dfs();
    cout<<r<<"\n";
    return 0;
}
