#include<bits/stdc++.h>
using namespace std;
int main()
{

    int o=0,t,i,n;
    char x;
    cin>>t;
    while(t--){
        string v;
        int z=0;
        cin>>n>>v;
        for(i=0;i<n;i++){
            if(v[i]=='0')z=i;
        }
        //cout<<z<<endl;
        for(i=0;i<n;i++){
            if(z!=i+1){

                if(v[i]=='1' && v[i+1]=='0'){
                //cout<<v<<endl;
                z--;
                 v.erase(v.begin()+(1+i));i--;n--;
                }
            }
            else{
                   // cout<<"y\n";
                if(v[i]=='1' && v[i+1]=='0'){
                 v.erase(v.begin()+i);i-=2;z--;
                }

            }
        }
        for(i=0;i<v.size();i++){
            cout<<v[i];
        }cout<<"\n";
    }
    return 0;
}
