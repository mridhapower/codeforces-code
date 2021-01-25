#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,n,k;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        k=(n-y)/x;
        cout<<(k*x)+y<<endl;
    }
    return 0;
}
