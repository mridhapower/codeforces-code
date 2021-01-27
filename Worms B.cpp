#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100000],n,m,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    cin>>m;
    while(m--)
    {
        cin>>i;
        printf("%d\n",lower_bound(a+1,a+n+1,i)-a);
    }
    return 0;
}
