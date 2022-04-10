#include<stdio.h>
int main()
{
    int n,k,sub,t;
    scanf("%d%d",&n,&k);

    for(int i=0;i<k;i++)
    {
        t=n%10;
        if(t==0)
           n=n/10;
        else
            n=n-1;
    }
    printf("%d\n",n);
}
