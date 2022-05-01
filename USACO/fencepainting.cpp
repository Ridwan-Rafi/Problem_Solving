#include<iostream>
using namespace std;
int main()
{
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);

    int a,b,c,d,mn,mx,cl[111],cnt=0,f=0;
    for(int i=0;i<110;i++)cl[i]=0;
    cin>>a>>b>>c>>d;
    mn=min(a,min(b,min(c,d)));
    mx=max(a,max(b,max(c,d)));

    for(int i=a;i<b;i++)
    {
        cl[i]=1;
    }
    for(int i=c;i<d;i++)
    {
       cl[i]=1;
    }
    for(int i=mn;i<=mx;i++)
    {
        if(cl[i]==1)cnt++;
        else f=1;
    }

        cout<<cnt<<endl;

    return 0;
}
