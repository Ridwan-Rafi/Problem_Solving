#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("teleport.in","r",stdin);
    freopen("teleport.out","w",stdout);
    int a,b,c,d,dist1,dist2;
    cin>>a>>b>>c>>d;
    dist1=abs(a-b);
    dist2=abs(min(a,b)-min(c,d))+abs(max(a,b)-max(c,d));
    cout<<min(dist1,dist2)<<endl;
}
