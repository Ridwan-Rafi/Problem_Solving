#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double ox,oy,ax,ay,by,bx,r,ab,th,po;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;

        r=((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay));
        r=sqrt(r);

        ab=((bx-ax)*(bx-ax))+((by-ay)*(by-ay));
        ab=sqrt(ab);

        th=((2*(r*r))-(ab*ab))/(2*(r*r));
        th=acos(th);

        po=th*r;
        printf("Case %d: %.5lf\n",i,po);
    }
}
