#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,cnt,qq;
    long long int sm=0,ar[2][200022],pre,in,n,x;
    cin>>n>>q;

    for(int i=0; i<n; i++)
    {
        cin>>ar[0][i];
        sm+=ar[0][i];
        ar[1][i]=0;
    }


pre=-1;
cnt=0;
    for(int i=0; i<q; i++)
    {
        cin>>qq;
        if(qq==1)
        {
            cin>>in>>x;
            if(ar[1][in-1]!=cnt)
            {
                //cout<<"hrwe\n";
                ar[0][in-1]=pre;
                ar[1][in-1]=cnt;
            }

            if(ar[0][in-1]>x)
            {
                sm-=(ar[0][in-1]-x);
                ar[0][in-1]=x;
            }
            else if(ar[0][in-1]<x)
            {
                sm+=(x-ar[0][in-1]);
                ar[0][in-1]=x;
            }
        }
        else if(qq==2)
        {
            cin>>x;
            sm=(n*x);
            pre=x;
            cnt++;
        }
        cout<<sm<<endl;
    }

}
