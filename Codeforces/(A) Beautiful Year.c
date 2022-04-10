#include<stdio.h>
int main()
{
    int y,t[6],m=0,n=0,temp;
    scanf("%d",&y);
    while(1)
    {
        y++;
        temp=y;
        //printf("\n%d\n",y);
     for(int i=0;i<4;i++)
        {
            t[i]=temp%10;
            temp=temp/10;
        }
    for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<4;j++)
            {
            if(t[i]==t[j])
             m++;
             else
              n++;
            }
        }
        if(m==0)
        {
            printf("%d\n",y);
            break;
        }
        else
        {
            m=0;
            n=0;
        }
    }

}
