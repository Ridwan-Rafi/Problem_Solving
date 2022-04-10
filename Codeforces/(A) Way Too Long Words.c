#include <stdio.h>
#include <string.h>

int main()
{
    int t,ln,n;
    char w[200];
    scanf("%d",&t);
    getchar();
    for(n=0;n<t;n++)
    {
    gets(w);
    ln=strlen(w);
    if(ln<=10)
        puts(w);
    else
    {
        printf("%c%d%c\n",w[0],ln-2,w[ln-1]);
    }
    }
    return 0;
}
