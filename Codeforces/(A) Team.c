#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,i,t,n=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d%d%d",&x,&y,&z);
    if((x+y+z)>1)
    {
        n++;
    }
    }
    printf("%d\n",n);
    n=0;
    return 0;
}
