#include<stdio.h>
#include<string.h>
int main()
{
    int ln1,ln2;
    char s1[110],s2[110],s3[110],s4[110];
    gets(s1);
    gets(s2);
    strcpy(s3,strupr(s1));
    strcpy(s4,strupr(s2));
    if((strcmp(s3,s4))==0)
        printf("0");
    else if((strcmp(s3,s4))<0)
        printf("-1");
    else if((strcmp(s3,s4))>0)
        printf("1");
}
