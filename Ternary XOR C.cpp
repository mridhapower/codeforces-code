#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--){
       // cin>>n;
        string a="",b="",x;
        cin>>n>>x;
        for(i=0;i<n;i++){

            if(a==b){

                if(x[i]=='0'){
                    a+='0';
                    b+='0';
                }
                else if(x[i]=='2'){
                    a+='1';
                    b+='1';
                }
                else {
                    a+='1';
                    b+='0';
                }
            }
            else if(a>b){
                b+=x[i];
                a+='0';
            }
            else{
                b='0';
                a=x[i];
            }
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
    return 0;
}
