#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,t,r,c,flag,br;
    char s[10][10];
    cin>>t;
    while(t--)
    {
        flag=br=0;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>s[i][j];
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
          //      cout<<s[i][j];
                if(s[i][j]=='R')
                {
                    r=i;
                    c=j;
                    br=1;
                    break;

                }
            }
            if(br==1)break;
        //    cout<<endl;
        }
br=0;
      //  cout<<c<<' '<<r<<endl;

        for(int j=c-1; j>=0; j--)
        {
            for(int i=0; i<n ; i++)
            {
                if(s[i][j]=='R')
                {
                    flag=1;
                    br=1;
                    break;
                }
            }
            if(br==1)break;
        }

        if(flag==1)cout<<"NO\n";
            else cout<<"YES\n";
    }
}
