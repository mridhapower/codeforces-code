#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0,n;
    char a;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        if(a=='8')c++;
    }
    while(c*11>n)c--;
    cout<<c<<"\n";
    return 0;
}
