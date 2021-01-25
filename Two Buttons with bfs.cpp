#include<bits/stdc++.h>
using namespace std;
int visit[30002];
int dist[30002];
int bfs(int n,int m)
{
    queue<int> q;
    q.push(n);
    int  u;
    //visit[n]=1;
    dist[n]=0;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        visit[u]=1;
        if(u-1==m)break;
        if(u*2==m)break;

        if(u-1>=0&& visit[u-1]==0)
            {

                q.push(u-1);
                dist[u-1]=dist[u]+1;
                //cout<<dist[u-1]<<endl;
            }
        if( u<=m&&visit[u*2]==0)
            {
                q.push(u*2);
                dist[u*2]=dist[u]+1;
                //cout<<dist[u-1]<<endl;
            }
    }
    return dist[u]+1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<bfs(n,m)<<endl;
    //cout<<clock<<"ms"<<endl;
    return 0;
}
