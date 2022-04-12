#include<bits/stdc++.h>
using namespace std;
long long int bainary(long long int bn)
{
    long long int cnt=0;
    while (bn > 0)
    {
        if((bn % 2)==1)cnt++;

        bn = bn / 2;
    }
    return cnt;
}
int main()
{
    int t;
    long long int b,one;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>b;
        one=bainary(b);
       // cout<<one<<endl;
        if(one%2==1)
        {
            cout<<"Case "<<i<<": odd"<<endl;
        }
        else
            cout<<"Case "<<i<<": even"<<endl;
    }
    return 0;
}
