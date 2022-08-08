#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,xmin,ymin,xmax,ymax,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        xmax=ymax=-1000;
        xmin=ymin=1000;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            if(x==0)
            {
                ymin=min(y,ymin);
                ymax=max(y,ymax);
            }
            if(y==0)
            {
                xmin=min(x,xmin);
                xmax=max(x,xmax);
            }
            //printf("xm=%d xx=%d ym=%d yx=%d\n",xmin,xmax,ymin,ymax);
        }
        if(xmin>=0 && xmax>=0)
        {
            cnt=xmax*2;
        }
        else if(xmin<0 && xmax<0)
            cnt=abs(xmin)*2;
        else{
            cnt=(abs(xmin)*2)+(xmax*2);
        }

        if(ymin>=0 && ymax>=0)
        {
            cnt+=(ymax*2);
        }
        else if(ymin<0 && ymax<0)
            cnt+=(abs(ymin)*2);
        else{
            cnt+=((abs(ymin)*2)+(ymax*2));
        }
        cout<<cnt<<endl;
    }
}
