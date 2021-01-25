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
ll nCr(ll n,ll r)
{
    ll p=1,k=1;
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;

            n--;
            r--;
        }
    }

    else
        p = 1;
    return p;
}
int main()
{
    ll t,n;
    sci(t);
    while(t--){
        sci(n);
        ll m,x=0,c=0,a[n],i,j,s;
        FOR(i,n)sci(a[i]);
        FOR(i,n-1)
        {
            x=1;
            if(a[i]!=-1){
                for(j=i+1;j<n;j++){
                    if(a[j]!=-1){
                        m=a[i]&a[j];
                    s=a[i]^a[j];
                    if(m>=s){
                       //a[i]=-1;
                       a[j]=-1;
                        x++;
                    }
                    }
                }
            }
            if(x>=2){
                    c+=nCr(x,2);
                    //cout<<c<<endl;
            }

        }
        cout<<c<<endl;

    }
    return 0;
}


