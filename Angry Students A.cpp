#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx,t,n,c,f;
    char x;
    cin>>t;
    while(t--){
        c=0;
        f=0;
        mx=0;
        cin>>n;
        while(n--){
            cin>>x;
            if(x=='A'){
                f=1;
                if(mx<c)mx=c;
                c=0;
            }
            else if(x=='P'&& f==1){
                c++;
            }
        }
        if(mx<c)mx=c;
        cout<<mx<<"\n";
    }
    return 0;
}
