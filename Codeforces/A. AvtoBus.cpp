#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int x,y,n,bb,nmx,nmn,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1 ||n<4)cout<<-1<<endl;
        else if(n%4==0 && n%6==0)
        {
            x=n/6;
            y=n/4;
            cout<<x<<' '<<y<<endl;
        }
        else if(n%4==0)
        {
            y=n/4;
            x=y;
            bb=n%6;
            if(bb%4==0)
            {
                x=n/6;
                x+=(bb/4);
            }
            else
            {
                cnt=0;
                while(n>3)
                {
                    n-=4;
                    cnt++;
                    if(n%6==0)
                    {
                        x=n/6;
                        x+=cnt;
                        break;
                    }
                }
            }
            x=min(x,y);
            cout<<x<<' '<<y<<endl;
        }
        else if(n%6==0)
        {
            x=n/6;
            y=x;
            bb=n%4;
            if(bb%6==0)
            {
                y=n/4;
                y+=(bb/6);
            }
            else
            {
                cnt=0;
                while(n>5)
                {
                    n-=6;
                    cnt++;
                    if(n%4==0)
                    {
                        y=n/4;
                        y+=cnt;
                        break;
                    }
                }

            }
            y=max(x,y);
            cout<<x<<' '<<y<<endl;
        }
        else
        {
            cnt=0;
            nmx=n;
            while(nmx>5)
            {
                nmx-=6;
                cnt++;
                if(nmx%4==0)
                {
                    y=nmx/4;
                    y+=cnt;
                    break;
                }
            }
            nmn=n;
            cnt=0;
            while(nmn>3)
            {
                nmn-=4;
                cnt++;
                if(nmn%6==0)
                {
                    x=nmn/6;
                    x+=cnt;
                    break;
                }
            }
            cout<<x<<' '<<y<<endl;
        }

    }
}
