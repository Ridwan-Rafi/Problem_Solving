#include<stdio.h>
int main()
{
    int n,a=0,d=0;
    char s[100000];
    scanf("%d ",&n);
    gets(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        printf("Anton\n");
    else if(a<d)
        printf("Danik\n");
    else
        printf("Friendship\n");
}
