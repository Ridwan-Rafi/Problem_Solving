#include<bits/stdc++.h>
using namespace std;

int t,n,m;
long long int pro1(long long int a[],long long int ln)
{
    long long int mx1,mx2,mn;
        mx1=a[ln-1];
        mx2=a[ln-2];
        mn=a[0];

        long long int sum=0,gun;

        if(n<m)
        {
            gun=(m-1)*(mx1-mn);
            gun+=(n-1)*(mx2-mn);
        }
        else{
            gun=(n-1)*(mx1-mn);
            gun+=(m-1)*(mx2-mn);
        }

        int baki=(n-1)*(m-1);

        gun+=(baki*(mx1-mn));
        return gun;
}

long long int pro2(long long int a[],long long int ln)
{
    long long int mx;
        mx=a[ln-1];

        long long int sum=0,gun;

        if(n<m)
        {
            gun=(m-1)*(mx-a[0]);
            gun+=(n-1)*(mx-a[1]);
        }
        else{
            gun=(n-1)*(mx-a[0]);
            gun+=(m-1)*(mx-a[1]);
        }

        int baki=(n-1)*(m-1);

        gun+=(baki*(mx-a[0]));
        return gun;
}
int main()
{

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
       long long int ar[n+3][m+4],a[(n*m)+4];
       long long int ln=n*m;
        for(int i=0;i<ln;i++)cin>>a[i];

        sort(a,a+ln);


        long long int gun,m1,m2;

        m1=pro1(a,ln);
        m2=pro2(a,ln);
        cout<<max(m1,m2)<<endl;
    }
}
