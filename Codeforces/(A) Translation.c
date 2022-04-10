#include<stdio.h>
#include<string.h>
int main()
{
    char s[110],t[110],tr[110];
    int ln,m,i,j=0;
    scanf("%s%s",&s,&t);
    ln=strlen(t);
    for(i=ln-1;i>=0;i--)
        {
        tr[j]=t[i];
        j++;
        }
  tr[j]='\0';
    m=strcmp(tr,s);
    if(m==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
