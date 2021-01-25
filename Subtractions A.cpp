#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,t,r,x;
    cin>>t;
    while(t--){
        r=0;
        cin>>a>>b;
        if(a>b)swap(a,b);
        while(a>=1){
            //if(a>b)swap(a,b);
            if(a==0)break;
            x=b/a;
            r+=x;
            b=b-(x*a);
            //cout<<"b: "<<b<<endl;
            if(a>b)swap(a,b);
        }
        cout<<r<<"\n";
    }
    return 0;
}

