#include<stdio.h>
int main()
{
    int n,h,a[2001],count=0;
    scanf("%d%d",&n,&h);
    for(int i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     if(a[i]>h)
            count++;
    }
printf("%d\n",n+count);
}
