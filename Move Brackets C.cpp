#include<bits/stdc++.h>
using namespace std;
int main()
{


    int i,n,t,x;
    cin>>t;
    while(t--){
        string s,a;
        getchar();
        char c;
        cin>>n>>s;
        x=0;
        a+="q";
        a+=s[0];
        //cout<<a[0]<<endl;
        for(i=1;i<n;i++){
                //cout<<"size :"<<a.size()<<endl;
            if(a[a.size()-1]==s[i]||(a[a.size()-1]==')'&&s[i]=='(')||a.size()==1)a+=s[i];
            if(a[a.size()-1]=='('&&s[i]==')') {
               a.erase(a.begin()+(a.size()-1));
           // cout<<a.size()<<endl;
            }
            //if( q.pop();
        }
        x=a.size()-1;
        //cout<<a<<endl;
        if(x&1)cout<<x<<endl;
        else cout<<x/2<<endl;
    }
    return 0;
}
