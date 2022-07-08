#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[111],v[200],x,f,m,xx;
    cin>>t;
    while(t--)
    {
        f=0;
        for(int i=0;i<200;i++)
            v[i]=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>m;
            ar[i]=m;
        v[m]=1;
        }


        for(int i=0;i<n;i++)
        {
            f=0;
            xx=ar[i];

            for(int j=0;j<n;j++)
            {
                if(i==j)continue;
                if(f==0)
                {
                    x=ar[j];
                    f=1;
                }
                else
                x=x^ar[j];

            }
           // printf("x=%d\n",x);
            if(xx==x)
            {
                printf("%d\n",x);
                break;
            }
        }
    }
}
