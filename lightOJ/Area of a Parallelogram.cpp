
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ax,ay,bx,by,cx,cy,dx,dy,area,x,y;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dy=(cy-by)+ay;
        dx=ax+(cx-bx);
        x=abs(bx-ax);
        y=abs(cy-by);

        printf("Case %d: %d %d %lld\n",i,dx,dy,x*y);
    }
}
