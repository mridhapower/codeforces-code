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
        ll i,z=0,c=0,a[n],f=0;
        FOR(i,n)sci(a[i]);
        FOR(i,n)
        {
            if(a[i]==0)z++;
            else{
                if(f==1){
                    c+=z;
                }
                f=1;
                z=0;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}

