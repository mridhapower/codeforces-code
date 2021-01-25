#include<bits/stdc++.h>
using namespace std;
int main()
{
    int o,e,t,n,x;
    cin>>t;
    while(t--){
        o=0;
        e=0;
        cin>>n;
        while(n--){
            cin>>x;
            if(x&1)o++;
            else e++;
        }
        if(o>0&&e>0||o&1)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
