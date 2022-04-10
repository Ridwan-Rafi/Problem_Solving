#include<stdio.h>
int main()
{
    int n,a[1000],b[1000],p[1002],t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    p[0]=0;
    for(int i=0;i<n;i++)
    {
        p[i+1]=(p[i]-a[i])+b[i];
    }
    for(int i=0;i<=n;i++)
    {
       for(int k=i;k<=n;k++)
       {
           if(p[i]<p[k])
           {
               t=p[i];
               p[i]=p[k];
               p[k]=t;
           }
       }
    }
printf("%d\n",p[0]);
return 0;
}
