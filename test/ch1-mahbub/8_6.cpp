#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,j,c,p,cn,cnn;
    cin>>n;
    if(n%2==0)n++;
    cnn=c=ceil(n/2.0);
    cn=0;
    cnn--;
    for(int i=1;i<=c;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(abs(c-j)<=cn)printf("%d",(abs(abs(c-j)-c)-cnn));
            else printf(".");
        }
        cn++;
        cnn--;
        printf("\n");
    }
    cn--;
    for(int i=1;i<c;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(abs(c-j)<cn)printf("%d",(abs(abs(c-j)-c))-(i));
            else printf(".");
        }
        cn--;
        printf("\n");
    }
}

