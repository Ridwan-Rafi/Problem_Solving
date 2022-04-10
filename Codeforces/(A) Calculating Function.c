#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    if(n%2==0)
    printf("%lld\n",n/2);
    else
    {
     n=n+1;
     printf("-%lld\n",n/2);
    }
}
