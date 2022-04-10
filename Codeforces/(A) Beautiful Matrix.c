#include<stdio.h>
int main()
{
    int a,b,i,j,m[6][6],count=0;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        scanf("%d",&m[i][j]);
   for(i=0;i<5;i++)
    {
     for(j=0;j<5;j++)
     {
        if(m[i][j]==1)
            break;
     }
            if(m[i][j]==1)
            break;
    }
    a=2-i;
    if(a<0)
        a=-(a);
    b=2-j;
    if(b<0)
        b=-(b);
    count=a+b;
    printf("%d\n",count);
}
