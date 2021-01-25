#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll result=0,a,b,x,y,t,test;
    cin>>test;
    while(test--){
        cin>>a>>b>>x>>y;
        if(a!=x)x++;
        if(b!=y)y++;
        result=abs(x-1)*b;
        t=abs(x-a)*b;
        result=max(result,t);
        t=abs(y-1)*a;
        result=max(result,t);
        t=abs(y-b)*a;
        result=max(result,t);
        cout<<result<<"\n";
    }
    return 0;
}
