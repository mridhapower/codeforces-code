#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,n,res=0,sum=0,a[100005];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(sum<=a[i]){
            ++res;
            sum+=a[i];
        }

    }
    cout<<res<<"\n";
    return 0;
}
