#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,ln,l,c=0;
    string sen;
    char alpha[30];
    cin>>t;
        c=0;
        for(int i=0; i<27; i++)
            alpha[i]=0;
        getchar();
        getline(cin,sen);
        ln=sen.length();
        for(int i=0;i<ln; i++)
        {
            if(sen[i]>=65 && sen[i]<=90)
                sen[i]=sen[i]+32;

            l=strlen(alpha);
            int match=0;
            //printf("%c\n%s\n\n",sen[i],alpha);
            for(int j=0; j<l; j++)
            {
                if(alpha[j]==sen[i])
                    match++;
                //      printf("%d ",j);
            }
            if(match==0)
                alpha[c++]=sen[i];
        }
        alpha[c]='\0';
        if(c==26)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        //printf("%d\n",alpa);
    return 0;
}
