#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[111100],b[111100],cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        //sort(a,a+n);
        //sort(b,b+n,greater<>());
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==b[j]&& a[j]==b[i])cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
