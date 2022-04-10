#include<stdio.h>
int main()
{
    int n,c=0,o[103];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&o[i]);
        if(o[i]==1)
            c++;
    }
    if(c==0)
        printf("EASY\n");
    else
        printf("HARD\n");
}
