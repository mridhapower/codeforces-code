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
    ll t;
    sci(t);
    while(t--){
        ll m,i,p=0,n=0,x,c=0;
        sci(m);
        FOR(i,m)
        {
            sci(x);
            if(x<0){
                if(p>0){
                    if(p>=abs(x))p-=abs(x);
                    else {
                        n=n+x+p;
                        p=0;
                    }
                }
                else {
                    n+=x;
                }
            }
            else p+=x;
        }
        cout<<abs(n)<<endl;
    }
    return 0;
}
