#include<bits/stdc++.h>
using namespace std;
map<long long,long long> visit,dist;
long long bfs(long long n)
{
    queue<long long> q;
    q.push(n);
    int  u;
    //visit[n]=1;
    dist[n]=0;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        visit[u]=1;
        if(u==1)return dist[u];

        if(u%6==0&& visit[u/6]==0)
            {
                //cout<<u<<endl;
                q.push(u/6);
                dist[u/6]=dist[u]+1;
                //cout<<dist[u-1]<<endl;
            }
       else if( u+u<9000000000&&visit[u*2]==0)
            {
                //cout<<u<<endl;
                q.push(u*2);
                dist[u*2]=dist[u]+1;
                //cout<<dist[u-1]<<endl;
            }
            else break;
    }
    return -1;
}
int main()
{
    long long t;
    cin>>t;
    while(t--){
        visit.clear();
        dist.clear();
        long long n,m;
        cin>>n;

        cout<<bfs(n)<<endl;
    }
    //cout<<clock<<"ms"<<endl;
    return 0;
}
