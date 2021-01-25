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
    while(t--)
    {
        map<char,double> m;
        string s;
        ll i,c=0;
        cin>>s;
        for(i=0;i<s.length();i++){
            if(s[i]=='[')m['[']++;
            else if(s[i]=='(')m['(']++;
            else if(s[i]==']' && m['[']>0){
                m['[']--;c++;
            }
            else if(s[i]==')' && m['(']>0){
                m['(']--;c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}

