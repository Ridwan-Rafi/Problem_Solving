#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[100],t,cnt;
    bool f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        f=false;
        for(int i=n-2; i>=0; i--)
        {
            if(ar[i+1]==0)
            {
                f=true;
                break;
            }
            while(ar[i]>=ar[i+1])
            {
                ar[i]/=2;
                cnt++;
            }
        }
        if(f)
        {
            cout<<-1<<endl;
        }
        else cout<<cnt<<endl;
    }
}
