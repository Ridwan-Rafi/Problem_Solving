#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0,ln,f=0;
    string s;
    cin>>s;
    ln=s.size();
    for(int i=0;i<ln-1;i+=2)
    {
        if(s[i]=='A'){
            a+=s[i+1]-'0';
        }
        else{
            b+=s[i+1]-'0';
        }
        printf("a=%d b=%d\n",a,b);
         if(a==10 && b==10)
         {
             f=1;
         }
         else if(f==0 && a==11)
            {printf("A\n");
            break;
            }
         else if(b==11 && f==0){
            printf("B\n");
            break;
         }

         if(f)
         {
             if(b<=a-2)
                {printf("A\n");
                break;}
             else if(a<=b-2){
                printf("B\n");
                break;
             }
         }
    }
    return 0;
}
A2B2A2B2A2B2A2B2A2B2
