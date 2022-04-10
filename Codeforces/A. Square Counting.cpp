#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,s,ss,cnt;
cin>>t;
while(t--)
{
    cin>>n>>s;
ss=n*n;
    cnt=0;

    //ss=pow(s,1.0/());
    if(ss>s)
        cout<<0<<endl;
    else if(ss==s)
        cout<<1<<endl;
    else{
        cnt=s/ss;
        cout<<cnt<<endl;
    }
}
}
