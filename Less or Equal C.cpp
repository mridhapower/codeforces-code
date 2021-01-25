#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll n,k,i,c,l=1,h=1e9,m;
    vector<ll> a;
    vector<ll>::iterator r;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>c;
        a.push_back(c);
    }
    sort(a.begin(),a.end());
    while(l<=h){
        m=(h+l)/2;
         r=upper_bound(a.begin(),a.end(),m);
        if((r-a.begin())==k){
            cout<<m<<"\n";return 0;
        }
        if(k<(r-a.begin()))h=m-1;
        else l=m+1;
    }
    cout<<"-1\n";
    return 0;
}
