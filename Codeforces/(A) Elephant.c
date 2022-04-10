#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while(!n==0)
    {
        if(n>=5)
            n=n-5;
        else if(n==4)
            n=n-4;
        else if(n==3)
            n=n-3;
        else if(n==2)
            n=n-2;
        else
            n=n-1;
        i++;
    }
    printf("%d",i);
    return 0;
}
