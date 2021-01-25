#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[50000],i,f,l,r;
    cin>>t;
    while(t--){
        f=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n-2;i++){
            for(l=i+2;l<n;l++){
                if(a[i]==a[l]){
                    f=1;break;
                }
            }
        }
        if(f==1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
