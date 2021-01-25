#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,t;
    cin>>t;
    while(t--){
        set<long long > a;
        cin>>n;
        while(n--){
            cin>>x;
            a.insert(x);
        }
        cout<<a.size()<<endl;
    }
    return 0;
}
