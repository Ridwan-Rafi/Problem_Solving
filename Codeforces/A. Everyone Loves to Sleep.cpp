#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,h,m,hi,mi,ans,f,ar[2][20],time;
    cin>>t;
    while(t--)
    {
        time=f=0;
        cin>>n>>h>>m;
        for(int i=0;i<n;i++)
        {
            cin>>hi>>mi;
            if(hi==h && mi==m)f=1;
            ar[0][i]=hi;
            ar[1][i]=mi;
        }
        if(f==1)cout<<0<<' '<<0<<endl;
        else{
            while(1)
            {
                for(int i=0;i<n;i++)
                {
                    if(h==ar[0][i] && m==ar[1][i])
                    {
                        f=2;
                        break;
                    }
                }
                if(f==2)break;


                m++;
                time++;
                if(m==60)
                {
                    h++;
                    m=0;
                }
                if(h==24)h=0;
            }
            h=time/60;
            m=time%60;
            cout<<h<<' '<<m<<endl;
        }
    }
}
