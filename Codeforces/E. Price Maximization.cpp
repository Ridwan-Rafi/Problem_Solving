#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[200222],k,v;
    long long int pa;
    cin>>t;
    while(t--)
    {
        pa=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);
        for(int i=0;i<n-1;i+=2)
        {
            v=(a[i]+a[i+1])/k;

            pa+=v;
        }
        cout<<pa<<endl;
    }
}
