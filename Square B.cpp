#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;

        if((a==c&&b+d==a)||(a==d&&b+c==a)||(b==c&&a+d==b)||(b==d&&a+c==b))cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
