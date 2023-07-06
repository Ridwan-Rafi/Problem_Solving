#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t,n;
    string s;
    char ch;

    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int ar[30],ck[n+4];
        for(int i=0;i<30;i++)ar[i]=-1;

        for(int i=0;i<n;i++)
        {
            c=s[i]-'a';
            if(ar[c]==-1)
            {
                if(i==0){
                        ar[c]=1;
                        ck[i]=1;
                }
                else
                {
                    b=s[i-1]-'a';
                    if(ar[b]==0){
                            ar[c]=1;
                            ck[i]=1;
                    }
                    else if(ar[b]==1){
                            ar[c]=0;
                            ck[i]=0;
                    }
                }
            }
            else ck[i]=ar[c];

        }
        bool f=0;
        for(int i=1;i<n;i++)
        {
            if(ck[i-1]==ck[i]){
                    f=1;
                    break;
            }
        }

        f?cout<<"NO\n" : cout<<"YES\n";


    }
}
