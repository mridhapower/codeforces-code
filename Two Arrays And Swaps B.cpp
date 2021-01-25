#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,m,sum,i,k,a[35],b[35];
    cin>>t;
    while(t--){
        sum=0;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(i=0;i<k;i++){
            if(sum-a[i]+b[i]>sum)sum=sum-a[i]+b[i];
        }
        cout<<sum<<"\n";

    }
    return 0;
}

