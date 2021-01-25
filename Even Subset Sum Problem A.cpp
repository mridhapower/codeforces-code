#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,i,x,t;
    cin>>t;
    while(t--){
            a=b=c=0;
            cin>>n;
            for(i=1;i<=n;i++){
            cin>>x;
            if(x&1 && a==0)a=i;
            else if(x&1 && b==0)b=i;
            else if(x%2==0 && c==0)c=i;
        }
        if(c!=0)cout<<1<<"\n"<<c<<"\n";
        else if(a!=0 && b!=0)cout<<2<<"\n"<<a<<' '<<b<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}
