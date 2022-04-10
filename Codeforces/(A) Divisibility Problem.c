#include<stdio.h>
int main()
{
    int t,a,b1,b;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d%d",&a,&b);
        if(a<=b)
            printf("%d\n",b-a);
        else
        {
            if(a%b==0)
               {
                   printf("0\n");
            }
            else
            {
                if(b<=50000)
                {
                    int c=0;
                    while(1)
                    {
                        if(a%b==0)
                            {
                                printf("%d\n",c);
                                break;
                            }
                        else
                        {
                            a++;
                            c++;
                        }
                    }
                }
                else
                {
                 int mul=1;
                 b1=b;
                while(!(b1>=a))
                 {
                     b1=b*mul;
                     mul++;
                     //printf("b1=%d mul=%d\n",b1,mul);
                 }
                 if(a<=b1)
                 printf("%d\n",b1-a);
                }
                }
            }
        }
    }
