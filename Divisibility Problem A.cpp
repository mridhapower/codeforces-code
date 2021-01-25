#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r;
    int a,b;
    cin>>t;
    while(t--){
            r=0;
        cin>>a>>b;
        if(a>b&&a%b!=0){
            r=b*ceil((double)a/b)-a;
        }
        else if(a<b&&a%b!=0){
            r=b-a;
        }
        cout<<r<<"\n";
    }
    return 0;
}
