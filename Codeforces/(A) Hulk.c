#include<stdio.h>
int main()
{
    char h[8]="I hate",l[8]="I love",t[5]="that",i[3]="it";
    int n;
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        if(j==1)
            printf("%s",h);
        else
        {
            if(j>1)
                printf(" %s ",t);
         if(j%2==1)
            printf("%s",h);

        if(j%2==0)
        printf("%s",l);
        }
    }
    printf(" %s",i);
}
