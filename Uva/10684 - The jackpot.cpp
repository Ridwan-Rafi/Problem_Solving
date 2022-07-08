#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;

        long long int ar[n+2],mx=-11111111111,sm;

        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=1;i<n;i++)ar[i]+=ar[i-1];

        for(int i=0;i<n-1;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(i==0)
                    sm=ar[j];
                else
                    sm=ar[j]-ar[i-1];
                mx=max(sm,mx);
            }
        }
        if(mx<=0)cout<<"Losing streak.\n";
        else
        cout<<"The maximum winning streak is "<<mx<<'.'<<endl;
    }
    return 0;
}
