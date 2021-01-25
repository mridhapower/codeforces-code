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
        map<ll,ll> a;
        ll i,x,c=0,l,m;
        m=ceil((ll)n/2);
        FOR(i,n){
            sci(x);
            a[x]++;
        }
        if(n==1)cout<<"0\n";
        else{
            l=a.size();
            for(auto j=a.begin();j!=a.end();j++){
                if(j->second>c)c=j->second;
            }
            if(c==1)cout<<"1\n";
            else if(l==c){
                    cout<<l-1<<"\n";
            }
            else if(l<c) cout<<l<<"\n";
            else cout<<c<<"\n";
                }

    }
    return 0;
}

