#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,t,s,x;
    cin>>t;
    while(t--){
            x=0;
        cin>>a>>b>>c;
        if(a<b)swap(a,b);
        while(a<=c){
            x++;
            if(a<b)swap(a,b);
            s=a;
            a+=b;
            b=s;

        }
        cout<<x<<"\n";
    }
    return 0;
}
