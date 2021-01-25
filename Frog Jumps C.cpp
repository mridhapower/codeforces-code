#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,i,d;
    string s;
    cin>>t;
    while(t--){
        vector<ll> v;
        cin>>s;
        i=s.size();
        v.push_back(i+1);
        while(i--){
            if(s[i]=='R')v.push_back(i+1);
        }
        v.push_back(0);
        d=INT_MIN;
        for(i=0;i<v.size()-1;i++){
            d=max(d,v[i]-v[i+1]);
        }
        cout<<d<<"\n";
        getchar();
    }
    return 0;
}
