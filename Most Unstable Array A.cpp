#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,m,sum,i;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n==1)cout<<"0\n";
        else if(n==2)cout<<m<<endl;
        else cout<<m*2<<endl;

    }
    return 0;
}
