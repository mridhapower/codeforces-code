#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,k,i;
    cin>>t;
    while(t--){

        cin>>n>>k;
        ll a[n],x,sum=0,w[k];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(i=0;i<k;i++){
            cin>>w[i];
        }
        sort(w,w+k);
        for(i=0;i<k;i++){
            sum+=a[i];
            if(w[i]==1){
                sum+=a[i];
            }
        }
        x=k;
        for(i=0;i<k;i++){
            if(w[i]==1)continue;
            else{
                sum+=a[x+w[i]-2];
            x+=w[i]-1;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
