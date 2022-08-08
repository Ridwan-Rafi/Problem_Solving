#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,j,c,p,cn;
    cin>>n;
    if(n%2==0)n++;
    c=ceil(n/2.0);
    cn=0;
    for(int i=1;i<=c;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(abs(c-j)<=cn)printf("*");
            else printf(".");
        }
        cn++;
        printf("\n");
    }
    cn--;
    for(int i=1;i<c;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(abs(c-j)<cn)printf("*");
            else printf(".");
        }
        cn--;
        printf("\n");
    }
}
