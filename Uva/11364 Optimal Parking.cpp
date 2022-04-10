#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s;
    cin>>t;
    while(t--)
    {
        int minm=1000,maxm=-1;
        cin>>s;
        int tem;
        for(int i=0;i<s;i++)
        {
            cin>>tem;
            if(tem>maxm)maxm=tem;
            if(tem<minm)minm=tem;
            //cout<<"temp="<<tem<<" maxm="<<maxm<<" minm="<<minm<<endl;
        }
        cout<<(maxm-minm)*2<<endl;
    }
    return 0;
}
