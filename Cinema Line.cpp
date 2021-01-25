#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0;
    long long int n,x,i,sum=0;
    cin>>n;
    while(n--){
        cin>>x;
        if(x==25)a++;
        else if(x==50&&a>0){
            b++;
            a--;
        }
        else if(x==100 &&a>0){
            if(b>0){
                b--;
                a--;
            }
            else a-=3;
        }
        else {
            cout<<"NO\n";return 0;
        }
    }
    if(a<0||b<0)cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}
