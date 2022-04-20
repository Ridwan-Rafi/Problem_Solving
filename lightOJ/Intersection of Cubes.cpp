
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,n,x1,y1,z1,x2,y2,z2,xm=-1,xl=11111,ym=-1,yl=11111,zm=-1,zl=11111,nt;
    long long int ans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        xm=-1,xl=11111,ym=-1,yl=11111,zm=-1,zl=11111;

nt=n;
        while(n--)
        {
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            xm=max(xm,x1); xl=min(x2,xl);
            ym=max(ym,y1); yl=min(y2,yl);
            zm=max(zm,z1); zl=min(z2,zl);
        }
        x1=xl-xm;
        if(x1<0)x1=0;
        y1=yl-ym;
        if(y1<0)y1=0;
        z1=zl-zm;
        if(z1<0)z1=0;

        ans=x1*y1*z1;

       // if(nt==1)cout<<"Case "<<i<<": "<<0<<endl;
       // else{
        //printf("xm=%d xl=%d ym=%d yl=%d zm=%d zl=%d\n",xm,xl,ym,yl,zm,zl);

     cout<<"Case "<<i<<": "<<ans<<endl;
       // }
    }
}
