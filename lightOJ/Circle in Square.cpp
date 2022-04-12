#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0);
int main()
{
    int t;
    double rad,corner,sq,circle;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>rad;
        sq=4*(rad*rad);
        circle=rad*rad;
        circle=circle*PI;
        corner=(sq-circle)+0.000000001;
        printf("Case %d: %0.2f\n",i,corner);
    }
    return 0;
}
