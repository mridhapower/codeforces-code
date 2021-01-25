#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,b=0,w=0,l=0,a[101];
    char s;
    cin>>n;
    while(n--){
            cin>>s;
        if(s=='B')c=1;
        if(s=='B')b++;
        else if(s=='W'&& c==1 &&b>0){
            a[l]=b;
            b=0;
            l++;
            c=1;
        }

    }
    if(c==1 && b>0){
        a[l]=b;
        l++;
    }
    cout<<l<<"\n";
    for(int i=0;i<l;i++)
    {
        cout<<a[i]<<' ';
    }
    return 0;
}
