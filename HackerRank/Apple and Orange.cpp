#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s,t,m,n,adc=0,bdc=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int ad,bd;
    for(int i=0;i<m;i++)
{
    cin>>ad;
    if(ad+a>=s && ad+a<=t)
        adc++;
}
    for(int i=0;i<n;i++)
    {
        cin>>bd;
        if(bd+b>=s && bd+b<=t)
        bdc++;
    }
        cout<<adc<<endl;
        cout<<bdc<<endl;
return 0;
}
