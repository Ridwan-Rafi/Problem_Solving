#include<stdio.h>
int main()
{
    int n,p[105],sum=0;
    float l;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
         scanf("%d",&p[i]);
         for(int i=0;i<n;i++)
            sum=sum+p[i];
     l=(float)sum/n;
    printf("%f",l);

}
