#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)

int main()
{
    int n;
    double r,x,y,ar[20][2],x1,y1,ln=0,l=0;
cin>>n>>r;
for(int i=0;i<n;i++){
    cin>>x>>y;
    ar[i][0]=x;
    ar[i][1]=y;
}
ar[n][0]=ar[0][0];
ar[n][1]=ar[0][1];

for(int i=1;i<=n;i++)
{
    x=ar[i-1][0];
    x1=ar[i][0];
    y=ar[i-1][1];
    y1=ar[i][1];
    l=((x1-x)*(x1-x))+((y1-y)*(y1-y));
    l=sqrt(l);
    ln+=l;
}
//cout<<ln<<endl;
ln=ln+(2*PI*r);
printf("%.2lf\n",ln);
}
