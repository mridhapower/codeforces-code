#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,x,y;
    a="I hate ";
    b="I love ";
    y="that ";
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(c==1)cout<<y;
        if(i&1)cout<<a;
        else cout<<b;
        c=1;
    }
    cout<<"it\n";
    return 0;
}
