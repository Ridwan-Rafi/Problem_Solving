#include<stdio.h>
#include<string.h>
struct var{
    char c[5];
};
int main()
{
    int n,x=0;
    struct var s[200];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",&s[i].c);
    }
    for(int i=1;i<=n;i++)
    {
        if((strcmp(s[i].c,"X++"))==0 || (strcmp(s[i].c,"++X"))==0)
            x++;
        if((strcmp(s[i].c,"--X"))==0 || (strcmp(s[i].c,"X--"))==0)
            x--;
    }
printf("%d\n",x);
}
