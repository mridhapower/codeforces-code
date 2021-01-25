#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,s1=0,s2=0,l,r,m;
        cin>>n;
        l=pow(2,n);
        //cout<<l<<endl;
        s1=l;
        l=l>>1;
        s2=l;
        //cout<<l<<endl;
        l=l>>1;
        n-=2;
        m=n/2;
        while(m--){
          //      cout<<l<<endl;
                s2+=l;
                l=l>>1;
        }
        m=n/2;
        while(m--){
            //cout<<l<<endl;
                s1+=l;
                l=l>>1;

        }


        cout<<abs(s1-s2)<<endl;
    }
    return 0;
}
