#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,ln,in,v,f,ar[30];
    long long int tl,tl1;
    string s,s1;
    cin>>t;
    while(t--)
    {
        tl1=tl=f=0;

        for(int i=0;i<30;i++)ar[i]=0;

        cin>>s>>p;
        s1=s;
        ln=s.size();
        sort(s.begin(),s.end());
        // cout<<s<<endl;
        for(int i=0; i<ln; i++)
        {
            tl+=((s[i]-'a')+1);
        }
        in=ln-1;

        while(tl>p && in>=0)
        {
            v=(s[in]-'a')+1;
             //printf("v= %d  tl=%d\n",v,tl);
             ar[v]++;
            tl-=v;
            in--;
        }

            int ll=s1.size(),i=0;
           // printf("j=%d in=%d\n",j,in);
            while(i<ll)
            {
                v=(s1[i]-'a')+1;
                if(ar[v]>0)
                {
                    ar[v]--;
                    i++;
                    continue;
                }
                printf("%c",s1[i]);
                i++;
            }
            printf("\n");
    }
}
