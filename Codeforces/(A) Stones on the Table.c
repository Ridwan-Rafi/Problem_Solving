#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0;
    char color[60];
    scanf("%d",&n);
    getchar();
    gets(color);
    if(n==1)
        printf("0\n");
    else
    {
      for(int j=0;j<n;j++)
    {
        //printf("%c",color[j]);
       if(color[j]==color[j+1])
        count++;
    }
    printf("%d\n",count);
    }

}
