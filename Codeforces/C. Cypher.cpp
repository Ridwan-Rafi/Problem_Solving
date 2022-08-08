#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ar[200],n,ln;
    char s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            cin>>ln;
            for(int l=0;l<ln;l++)
            {
                cin>>s;
                if(s=='D')
                {
                    ar[i]++;
                    if(ar[i]>9)ar[i]=0;
                }
                else if(s=='U')
                {
                    ar[i]--;
                    if(ar[i]<0)ar[i]=9;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }
        printf("\n");
    }
}
