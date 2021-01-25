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
    ll i,t,n,x;
    sci(t);
    while(t--){
        ll f=0;
        map<char,ll> a;
        sci(n);
        x=n;
        while(x--){
            string s;
            cin>>s;
            for(i=0;i<s.size();i++){
                a[s[i]]++;
            }
        }
    for(auto l=a.begin();l!=a.end();l++){
          //cout<<l->first<<endl;
        if(l->second%n!=0){
        f=1;

        break;
    }
    }
    if(f==1)cout<<"NO\n";
    else cout<<"YES\n";
    }
    return 0;
}

