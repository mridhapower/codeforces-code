#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
       ll a[200005];
        ll sum=0,i,j,n,m;
        cin>>m;
        for(i=0;i<m;i++){
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            n=a[i];
            if(n>0){
                for(j=i;j<m;j++){
                    if(a[j]<0){
                        break;
                    }
                    i=j;
                    n=max(n,a[j]);
                }
            }
            else{
                for(j=i;j<m;j++){
                    if(a[j]>0){
                        break;
                    }
                    i=j;
                    n=max(n,a[j]);
                }
            }
            //cout<<i<<endl;
            sum+=n;
        }
        cout<<sum<<endl;
    }
    return 0;
}
