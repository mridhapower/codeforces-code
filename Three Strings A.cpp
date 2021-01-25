#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int n,f=0,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        for(n=0;n<a.length();n++){
            if(a[n]==c[n]||b[n]==c[n]){
                if(a[n]!=c[n]){
                    swap(a[n],c[n]);
                }
                else {
                    swap(b[n],c[n]);
                }
            }
            else break;
        }
        if(a==b && n==a.length())cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
