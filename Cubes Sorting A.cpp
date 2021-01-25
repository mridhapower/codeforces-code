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
        ll m,x=0,a[n],i,j;
        FOR(i,n)sci(a[i]);
        m=((n*(n-1))/2)-1;
        FOR(i,n)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);x++;
                }if(x>m)break;
            }if(x>m)break;
        }
        //FOR(i,n)cout<<a[i]<<endl;
        //cout<<x space m<<endl;
        if(x>m||m==0)printf("NO\n");
        else printf("YES\n");

    }
    return 0;
}

