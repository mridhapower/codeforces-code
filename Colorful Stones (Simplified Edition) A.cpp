#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    char c;
    int l,i,r=0;
    cin>>s>>t;
    l=t.length();
    for(i=0;i<l;i++){
        if(s[r]==t[i])r++;
    }
    cout<<r+1<<"\n";
    return 0;
}
