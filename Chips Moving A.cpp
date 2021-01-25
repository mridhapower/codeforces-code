#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long o=0,e=0,n,x;
    cin>>n;
    while(n--){
        cin>>x;
        if(x&1)o++;
        else e++;
    }

    cout<<min(o,e)<<"\n";
    return 0;
}
