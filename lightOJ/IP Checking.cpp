#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,ba,bb,bc,bd,ta,tb,tc,td,i,val,on;
    char ch;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        ta=tb=tc=td=0;

        scanf("%d%c%d%c%d%c%d",&a,&ch,&b,&ch,&c,&ch,&d);
        scanf("%d%c%d%c%d%c%d",&ba,&ch,&bb,&ch,&bc,&ch,&bd);

       // printf("%d %d %d %d\n",a,b,c,d);
        //printf("%d %d %d %d",ba,bb,bc,bd);

        i=0;
        while(ba!=0)
        {
            val=ba%10;
            ba/=10;
            if(val==1)
            {
                on=1;
                on=on<<i;
                ta=ta|on;
            }
            i++;
        }
        //cout<<ta<<endl;
        i=0;
        while(bb!=0)
        {
            val=bb%10;
            bb/=10;
            if(val==1)
            {
                on=1;
                on=on<<i;
                tb=tb|on;
            }
            i++;
        }
        //cout<<tb<<endl;

        i=0;
        while(bc!=0)
        {
            val=bc%10;
            bc/=10;
            if(val==1)
            {
                on=1;
                on=on<<i;
                tc=tc|on;
            }
            i++;
        }
        //cout<<tc<<endl;

        i=0;
        while(bd!=0)
        {
            val=bd%10;
            bd/=10;
            if(val==1)
            {
                on=1;
                on=on<<i;
                td=td|on;
            }
            i++;
        }
        //cout<<td<<endl;

        if(a==ta && b==tb && tc==c && td==d)
        {
            printf("Case %d: Yes\n",tt);
        }
        else
            printf("Case %d: No\n",tt);
    }
}
