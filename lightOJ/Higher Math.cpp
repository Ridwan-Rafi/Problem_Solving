
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int bahu[3],a;
    double b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>bahu[0]>>bahu[1]>>bahu[2];
        sort(bahu,bahu+3);
       // cout<<bahu[0]<<" "<<bahu[1]<<" "<<bahu[2]<<endl;
        a=(bahu[0]*bahu[0])+(bahu[1]*bahu[1]);
        b=sqrt(a);
       // cout<<"a="<<a<<" b="<<b<<endl;
        if(bahu[2]==b)
            cout<<"Case "<<i<<": yes"<<endl;
        else
            cout<<"Case "<<i<<": no"<<endl;
    }

}
