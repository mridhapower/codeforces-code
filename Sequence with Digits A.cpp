#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
int main()
{
    ll t,a,k,m,n;
    cin>>t;
    while(t--){
        cin>>a>>k;
        --k;
        while(k--){
            auto s = to_string(a);
            m = *max_element(begin(s),end(s))-'0';
            n = *min_element(begin(s),end(s))-'0';
            if(n==0)break;
            a+=(m*n);
        }
        cout<<a<<"\n";

    }
    return 0;
}
