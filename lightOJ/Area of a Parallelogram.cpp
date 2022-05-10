
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ax,ay,bx,by,cx,cy,dx,dy,x,y;
    long long int area;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dy=(cy-by)+ay;
        dx=ax+(cx-bx);
area=abs(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));
area=area*0.5;
        printf("Case %d: %d %d %lld\n",i,dx,dy,area);
    }
}
