#include<bits/stdc++.h>
using namespace std;
/** template**/
#define ll long long
#define sci(n) scanf("%lld",&n)
#define MEM(a,x) memset(a,x,sizeof(a))
#define FOR(i,N) FORR(i, 0, N)
#define FORR(i,a,b) FOTR(i, a, b, 1)
#define FOTR(i,a,b,c) for(int i=(a);i<(b);i+=(c))
#define space << " " <<
#define pb push_back
#define ff first
#define ss second
#define BUFFSIZE 30000
#define INF 1000000000
#define MOD 1000000009
#define MAX 200000
/** template**/
int main()
{
    ll t,n,m,i,j;
    sci(t);
    while(t--){
        cin>>n>>m;
        ll a[n],b[m],f=0;
        for(i=0;i<n;i++)sci(a[i]);
        for(i=0;i<m;i++)sci(b[i]);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i]==b[j]){
                    f=a[i];
                    break;
                }if(f!=0)break;
            }
        }
        if(f==0)cout<<"NO\n";
        else cout<<"YES\n"<<1 space f<<"\n";
    }
    return 0;
}

