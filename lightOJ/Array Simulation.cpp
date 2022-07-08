#include<iostream>
using namespace std;

void revers(int a[],int n)
{
    int ar[1111];
    for(int i=n-1,j=0;i>=0;i--,j++)
    {
        ar[j]=a[i];
    }
    for(int i=0;i<n;i++)
        a[i]=ar[i];
}

int main()
{
    int t,n,m,ar[1000],k,d,*arra;
    char c;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        while(m--)
        {
            cin>>c;
            if(c=='S')
            {
                cin>>d;
                for(int i=0;i<n;i++)ar[i]+=d;
            }
            else if(c=='M')
            {
                cin>>d;
                for(int i=0;i<n;i++)ar[i]*=d;
            }
            else if(c=='D')
            {
                cin>>d;
                for(int i=0;i<n;i++)ar[i]/=d;
            }
            else if(c=='P')
            {
                cin>>d>>k;
                swap(ar[d],ar[k]);
            }
            else if(c=='R')
            {
            revers(ar,n);
            }
        }
        cout<<"Case "<<j<<":\n";
        for(int i=0;i<n;i++)
        {
            cout<<ar[i];
            if(i<n-1)cout<<" ";
        }

        cout<<endl;
    }
    return 0;
}
