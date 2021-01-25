#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     long long int t,n,m;
     double x;
     cin>>t;
     while(t--){
        cin>>x>>n>>m;
        while(n>0||m>0){
            if(x<=0.0)break;
            if(n>0 &&(floor(x/2)+10)<x){
                x=floor(x/2)+10;n--;
            }
            else if(m>0) {
                x=x-10;m--;
            }
            else break;
        //cout<<x<<endl;
        }
        if(x>0.0)cout<<"NO\n";
        else cout<<"YES\n";
     }
     return 0;
 }
