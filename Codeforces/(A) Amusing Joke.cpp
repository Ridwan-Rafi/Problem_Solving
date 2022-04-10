#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,ab;
    int ln,ln1;
    char t;
    cin>>a>>b>>c;
    ab=a.append(b);
    ln=ab.size();
    ln1=c.size();
    for(int i=0;i<ln;i++)
    {
        for(int j=i;j<ln;j++)
        {
            if(ab[i]>ab[j])
            {
                t=ab[i];
                ab[i]=ab[j];
                ab[j]=t;
            }
        }
    }
   for(int i=0;i<ln1;i++)
    {
        for(int j=i;j<ln1;j++)
        {
            if(c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
if((ab.compare(c))==0)
    cout<<"YES\n";
else
    cout<<"NO\n";
}
