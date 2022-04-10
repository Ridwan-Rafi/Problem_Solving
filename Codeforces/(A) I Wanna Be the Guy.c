#include<stdio.h>
#include<string.h>
int main()
{
    int level,x,y,lvl=0,n1[150],n2[150],f[300],c=0,d;
    scanf("%d",&level);
    scanf("%d",&x);
    for(int i=0; i<x; i++)
        scanf("%d",&n1[i]);
    scanf("%d",&y);
    for(int i=0; i<y; i++)
        scanf("%d",&n2[i]);

    for(int i=1; i<=level; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(n1[j]==i)
            {
                f[c]=i;
                c++;
                break;
            }
            else
                continue;
        }
        for(int l=0; l<y; l++)
        {
            if(n2[l]==i)
            {
                f[c]=i;
                c++;
                break;
            }
            else
                continue;
        }
         //printf("i=%d c=%d f=%d\n",i,c,f[c-1]);
    }
    for(int i=1;i<=c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(f[j]==i)
            {
                lvl++;
                break;
            }
        }
    }
        //printf("lvl=%d \n",lvl);
  if(lvl==level)
       printf("I become the guy.\n");
   else
       printf("Oh, my keyboard!\n");
}
