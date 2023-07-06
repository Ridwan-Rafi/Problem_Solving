#include<bits/stdc++.h>
using namespace std;




long long int w,h,n,MOD=1e9;
bool possible(long long int side)
{
    long long int x,y,tot,area;

    x=side/w;
    y=side/h;
    tot=x*y;

    //cout<<x<<' '<<y<<' '<<tot<<endl;
    if(tot>=n)return true;
    else return false;
}

int main()
{

    cin>>w>>h>>n;
    long long int l=0,r=1,mid;
//cout<<r;


while(possible(r)==false)r*=2;

    mid=(l+r)/2;
    while(l+1<r)
    {
        if(possible(mid))
            r=mid;
        else l=mid;
        mid=(l+r)/2;
        //cout<<l<<' '<<r<<endl;
    }

   int lf,rf;

   lf=possible(l);
   rf=possible(r);

   if(lf==1 && rf==1)
   {
       if(l<r)cout<<l<<endl;
       else cout<<r<<endl;
   }
   else{
    if(lf==1)cout<<l<<endl;
    else if(rf==1)cout<<r<<endl;
   }
}
