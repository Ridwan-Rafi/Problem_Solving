#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,cnt=0;
    cin>>t;
    while(t--)
    {
        cnt=0;
    cin>>a>>b>>c>>d;
    if(b>a)cnt++;
    if(c>a)cnt++;
    if(d>a)cnt++;
    cout<<cnt<<endl;
}
}
