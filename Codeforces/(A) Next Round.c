#include<stdio.h>
int main()
{
    int j=0,n,k,i,a[120];
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>0 && a[i]>=a[k])
        {
            //printf("a=%d  k=%d\n",a[i],a[k]);
         j++;
        }
    }
    printf("%d",j);
    return 0;
}
