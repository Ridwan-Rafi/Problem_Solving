#include<bits/stdc++.h>
using namespace std;
bool chk(string a,string b,int str,int bs,int as)
{
    int j=0;
    for(int i=str;i<as;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    for(int i=str;i<as;i++)
    {
        if(b[j]==a[i])
        {
            j++;
        }
        else j=0;

        if(j==bs)
        return true;
    }

    return false;
}
int main()
{
    int t,n,m,j,f;
    string a,b;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>m>>n;
        cin>>a>>b;
        j=0;
        for(int i=0;i<m-1;i++)
        {
           if(b[0]=='0')
           {
             a[i+1]=min(a[i],a[i+1]);
           }
           else
            a[i+1]=max(a[i],a[i+1]);

           if(chk(a,b,i,n,m))
           {
               f=1;
               break;
           }
        }
        if(f==1)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}
