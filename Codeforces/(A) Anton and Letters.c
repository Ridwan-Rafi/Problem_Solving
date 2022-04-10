#include<stdio.h>
#include<string.h>
int main()
{
    char in[3005],let[1000],alpha[1000];
    int ln,j=0,l=0;
    gets(in);
    ln=strlen(in);
    for(int i=0;i<ln;i++)
    {
        if(in[i]>=97 && in[i]<=122)
            let[j++]=in[i];
    }
    let[j]='\0';
    //puts(let);
    for(int i=0;i<j;i++)
    {
        int t=0;
        for(int k=0;k<l;k++)
        {
            if(let[i]==alpha[k])
                t++;
        }
        if(t==0)
            alpha[l++]=let[i];
    }
    alpha[l]='\0';
    //puts(alpha);
    printf("%d\n",l);
    return 0;
}
