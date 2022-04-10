#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,v,a,b,c,mx,cnt,x,y;
    cin>>t;
    while(t--)
    {
        mx=-1;
        cnt=0;
        cin>>a>>b>>c;
        if(c>b)
        {
            mx=b%c;
        }
        else
        {
            if(b-c<a)
            {
                for(int i=b; i>=a; i--)
                {
                    v=i%c;
                    x=i/c;
                    mx=max(mx,v+x);
                    cnt++;
                    if(cnt==200)break;
                }
            }
            else
            {
                cnt=0;
                for(int i=b; i>=a; i--)
                {
                    v=i%c;
                    x=i/c;
                    mx=max(mx,v+x);
                    cnt++;
  //                  cout<<i<<' '<<v<<' '<<x<<' ' <<mx<<endl;
                    if(cnt==200)break;
                }
                v=b/c;
                y=v*c;

//cout<<v<<' '<<y<<' ' <<mx<<endl;

                cnt=0;
                for(int i=y; i>=a; i--)
                {
                    v=i%c;
                    x=i/c;
                    mx=max(mx,v+x);
                    cnt++;
                    if(cnt==100)break;
                }
            }
        }
        cout<<mx<<endl;

    }
}
