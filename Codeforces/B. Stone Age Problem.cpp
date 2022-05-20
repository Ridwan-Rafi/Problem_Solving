#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,ar[222222],qq,in,x;
    long long int sm=0;
    cin>>n>>q;

    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        sm+=ar[i];
    }

    for(int i=0; i<q; i++)
    {
        cin>>qq;
        if(qq==1)
        {
            cin>>in>>x;
            if(ar[in-1]>x)
            {
                sm-=(ar[in-1]-x);
                ar[in-1]=x;
            }
            else if(ar[in-1]<x)
            {
                sm+=(x-ar[in-1]);
                ar[n-1]=x;
            }
        }
        else if(qq==2)
        {
            cin>>x;
            sm=(n*x);
            for(int j=0; j<n; j++)
            {
                ar[j]=x;
            }
        }
        cout<<sm<<endl;
    }

}
