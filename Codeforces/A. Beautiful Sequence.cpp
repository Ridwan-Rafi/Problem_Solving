#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    int ar[n+4];

    for(int i=0;i<n;i++)cin>>ar[i];
    bool f=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt++;
        if(cnt>=ar[i]){
            f=1;
            break;
        }
    }

    f?cout<<"YES\n" : cout<<"NO\n";
}
}
