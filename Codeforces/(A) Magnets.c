#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=1;
    int m[200002];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&m[i]);

    for(int i=0;i<n;i++)
        if((m[i]==10 && m[i+1]==01)||(m[i]==01 && m[i+1]==10))
        count++;

        printf("%d\n",count);
}

