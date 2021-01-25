#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin>>t;
    while(t--){
        int x,z=0,o=0;
        cin>>s;
        for(i=0;i<s.length();i++){
            if(s[i]=='1')o++;
            else z++;

        }
            x=min(z,o);
        if(x%2!=0)cout<<"DA\n";
        else cout<<"NET\n";
    }
    return 0;
}
