#include<stdio.h>
#include<string.h>
int main()
{
    char name[105],al[105];
    int ln,l=0;
    scanf("%s",name);
    ln=strlen(name);
    for(int i=0; i<ln; i++)
    {
        int t=0;
        for(int j=0; j<=l; j++)
        {
            if(name[i]==al[j])
                t++;
        }
        if(t==0)
        {
            al[l]=name[i];
            l++;
        }
        al[l]='\0';
    }
if(l%2==0)
    printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}
