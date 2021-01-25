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
    ll t,n,k;
    sci(t);
        while(t--){
        sci(n);
        sci(k);
        ll s=0,i,a[n],x;
        FOR(i,n)sci(a[i]);
        sort(a,a+n);
        FOTR(i,1,n,1)
        {
            x=k-a[i];
            s+=(x/a[0]);//ceil(double(x)/a[0]);
        }
        cout<<s<<"\n";

    }
    return 0;
}
