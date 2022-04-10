#include<stdio.h>
#include<string.h>
int main()
{
    char n1[102],n2[102];
    int ln;
    scanf("%s%s",&n1,&n2);
    ln=strlen(n1);
    for(int i=0;i<ln;i++)
    {
       if(n1[i]==n2[i])
            printf("0");
       else
        printf("1");
    }
    //printf("%s\n%s",n1,n2);
}
