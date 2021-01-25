#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50];
    set<int>a;
    stack<int> st;
    int n,x;
    cin>>n;
    x=n;
    while(n--)
    {
        cin>>arr[n];
        //a.insert(x);
    }
    for(int i=0;i<x;i++){
        if(a.count(arr[i])==0)st.push(arr[i]);
        a.insert(arr[i]);
    }
    printf("%d\n",st.size());
    while(!st.empty()){
        printf("%d ", st.top());
        st.pop();
        }
    return 0;
}
