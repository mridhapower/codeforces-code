#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t,i,m,l;
    cin>>t;
    while(t--){
        vector<ll> a;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>m;
            a.push_back(m);
        }
        sort(a.begin(),a.end());

        m=n/2;
        l=m-1;
        if(n&1){
            cout<<a[m]<<' ';
            m++;
        }
        //cout<<m<<' '<<l<<endl;
        for(;m<n;l--,m++){
            cout<<a[m]<<' '<<a[l]<<' ';
        }cout<<"\n";
    }
    return 0;
}
