#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[111],mm,z,cnt,d,zz;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<111;i++)a[i]=0;

        cin>>n;
        z=cnt=d=zz=0;
        for(int i=0;i<n;i++)
        {
            cin>>mm;
            if(mm==0){
                    z=1;
            zz++;
            }
            else if(a[mm]==0)
            {
                a[mm]=1;
            }
            else if(a[mm]==1)d=1;
        }
        if(z==0)
        {
            if(d==0)
            {
                cnt=n+1;
            }
            else
                cnt=n;
        }
        else cnt=n-zz;
        cout<<cnt<<endl;
    }
}
