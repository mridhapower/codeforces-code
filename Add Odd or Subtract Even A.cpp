#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,x;
    cin>>t;
    while(t--){
        c=0;
        cin>>a>>b;
        while(a!=b){
            if(a>b){
                x=a-b;
                if(x&1)x++;
                c++;
                a-=x;
            }
            else{
                x=b-a;
                if(x%2==0)x--;
                a+=x;
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
