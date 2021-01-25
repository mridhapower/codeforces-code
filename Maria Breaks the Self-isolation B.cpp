#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,m,i,r,h=0;
    cin>>t;
    while(t--){
       map<ll,ll> a;
        cin>>n;
            r=1;
        for(i=0;i<n;i++){
            cin>>m;
            a[m]++;
            if(m>h)h=m;
        }
        m=0;
        for(auto it=a.begin();it!=a.end();it++){
            if(r+it->second+m>it->first){
                r+=(it->second+m);
                //cout<<"r: "<<r<<endl;
                m=0;
            }
            else{
                m+=it->second;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}

