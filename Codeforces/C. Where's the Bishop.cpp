#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ar[10][10];
    int t,cnt,f;
    cin>>t;
    while(t--)
    {
        f=0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>ar[i][j];
            }
        }

        for(int i=1;i<7;i++)
        {
            for(int j=1;j<7;j++)
            {
               // printf("%c",ar[i][j]);
               cnt=0;
                if(ar[i][j]=='#')
                {
                    if(ar[i-1][j-1]=='#')cnt++;
                    if(ar[i-1][j+1]=='#')cnt++;
                    if(ar[i+1][j-1]=='#')cnt++;
                    if(ar[i+1][j+1]=='#')cnt++;
                }
                if(cnt==4)
                {
                    printf("%d %d\n",i+1,j+1);
                    f=1;
                    break;
                }

            }
            if(f==1)break;
            //printf("\n");
        }
    }
}

