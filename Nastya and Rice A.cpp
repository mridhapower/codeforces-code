#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        if((n*(a-b)>=c-d&&n*(a-b)<=c+d)||(n*(a+b)>=c-d&&n*(a+b)<=c+d)||(n*(a)>=c-d&&n*(a)<=c+d)||(n*(b)>=c-d&&n*(b)<=c+d))cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
