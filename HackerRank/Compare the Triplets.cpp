#include<bits/stdc++.h>
using namespace std;
void comp(int a[],int b[])
{
    int c[2]={0,0};
    for(int i=0;i<3;i++)
    {
     if(a[i]>b[i])c[0]++;
     else if(a[i]<b[i])c[1]++;
     else
     {
         continue;
     }
    }
    cout<<c[0]<<" "<<c[1]<<endl;
}
int main()
{
    int a[3],b[3],*c[2];
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    comp(a,b);
    return 0;
}
