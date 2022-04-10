#include<stdio.h>
#include<string.h>
int main()
{
    char w[110],w1[110];
    int i,ln,c=0,l;
    gets(w);
    ln=strlen(w);

    for(i=0;i<ln;i++)
    {
        if(w[i]>=65 && w[i]<=90)
            c++;
    }
    l=ln-c;
    if(c>l)
    {
      strcpy(w1,strupr(w));
    }

    else
        strcpy(w1,strlwr(w));
    puts(w1);
}
