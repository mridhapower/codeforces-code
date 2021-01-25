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
        ll i,x;
        vector<ll> a;
        sci(n);
        for(i=0;i<n;i++){
            sci(x);
            a.pb(x);
        }
        for(i=0;i<n;i+=2){
            if(a[i]==1&& a[i+1]==0){
                a.erase(a.begin()+i);
                i--;
                n--;
            }
            else if(a[i]==0&& a[i+1]==1){
                a.erase(a.begin()+i+1);
                i--;
                n--;
            }
        }
        if(a.size()==0)cout<<0<<endl;
        else{
            cout<<a.size()<<"\n";
        for(i=0;i<a.size();i++){
            cout<<a[i]<<' ';
        }cout<<"\n";
        }
    }
    return 0;
}
