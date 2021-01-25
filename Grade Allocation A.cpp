#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t,s,m,x;
    cin>>t;
    while(t--){
        cin>>n>>m;
        s=0;
        while(n--){
            cin>>x;
            s+=x;
        }
        cout<<min(s,m)<<"\n";
    }
    return 0;
}
