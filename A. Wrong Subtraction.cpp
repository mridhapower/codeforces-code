#include<bits\stdc++.h>
using namespace std;
int main()
{
    int i,n,k,m;
    cin>>n>>k;
    for(i=0;i<k;i++){
        m=n%10;
        if(m==0){
            n/=10;
        }
        else{
            n--;
        }
    }
    cout<<n;
    return 0;
}
