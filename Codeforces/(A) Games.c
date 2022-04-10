#include<stdio.h>
int main()
{
   int  n,home[105],guest[105],c=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%d%d",&home[i],&guest[i]);
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(home[i]==guest[j])
            c++;
       }
   }
   printf("%d\n",c);
}
