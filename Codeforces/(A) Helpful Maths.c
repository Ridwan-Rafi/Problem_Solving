#include<stdio.h>
#include<string.h>
int main()
{
    char math[220];
    int ln,math1[220],c=0;
    gets(math);
    ln=strlen(math);
    for(int i=0;i<ln;i++)
    {
        if(math[i]=='+')
        {
            continue;
        }
        else
        {
           math1[c]=math[i]-48;
           c++;
        }
   }
   int k;
    for(int i=0;i<c;i++)
    {
      for(int j=i+1;j<c;j++)
    {
        if(math1[i]>math1[j])
        {
            k=math1[i];
            math1[i]=math1[j];
            math1[j]=k;
        }
            }
     if(i>0)
        printf("+");
    printf("%d",math1[i]);

    }

    //printf("\n%d ",math1[i]);
    return 0;
}
