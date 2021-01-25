#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,d,i;
    cin>>t;
    while(t--){
        d=3,i=1;
        cin>>n;
        while(n%d!=0){
            i++;
            d=d+pow(2,i);
           // cout<<d<<endl;
        }
        cout<<n/d<<endl;
    }
    return 0;
}
