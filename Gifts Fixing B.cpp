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
    ll t,n;
    sci(t);
    while(t--){
        sci(n);
       ll a[n],b[n],x=INT_MAX,y=INT_MAX,i,s=0;
       for(i=0;i<n;i++){
        sci(a[i]);
        x=min(x,a[i]);
       }
       for(i=0;i<n;i++){
        sci(b[i]);
        y=min(y,b[i]);
       }
       for(i=0;i<n;i++){
        s+=max(a[i]-x,b[i]-y);
       }
       cout<<s<<endl;
    }
    return 0;
}

