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
    ll n,a[1000],i,t;
    sci(t);
    while(t--){
        ll s=INT_MAX;
    sci(n);
    for(i=0;i<n;i++)sci(a[i]);
    sort(a,a+n);
    for(i=1;i<n;i++)if(a[i]-a[i-1]<s)s=a[i]-a[i-1];
    cout<<s<<"\n";
    }
    return 0;
}

