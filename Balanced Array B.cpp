#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        ll sum=0,sum2=0,x;
        cin>>n;
        if(n%4!=0)cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            x=2;
            for(ll i=0;i<n/2;i++){
                cout<<x<<' ';
                sum+=x;
                x+=2;
            }
            x=1;
            for(ll i=0;i<n/2-1;i++){
                cout<<x<<' ';
                sum2+=x;
                x+=2;
            }
            cout<<sum-sum2<<endl;
        }
    }
    return 0;
}
