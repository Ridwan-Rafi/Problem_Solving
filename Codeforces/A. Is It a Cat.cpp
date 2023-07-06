#include<bits/stdc++.h>
using namespace std;

void to(char &c)
{
    if(c>='A' && c<='Z')
        c+=32;
}
int main()
{
    int t,n;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int seq=0;
        bool f=0;
        char ar[]="meow";
        int ind=0;
        for(int i=0; i<n; i++)
        {
            to(s[i]);
           // cout<<s[i];

            if(seq==0)
            {
                if(s[i]=='m')continue;
                else if(s[i]=='e')seq++;
                else {
                    f=1;
                    break;
                }
            }
            else if(seq==1)
            {
                if(s[i]=='e')continue;
                else if(s[i]=='o')seq++;
                else {
                    f=1;
                    break;
                }
            }
            else if(seq==2)
            {
                if(s[i]=='o')continue;
                else if(s[i]=='w')seq++;
                else {
                    f=1;
                    break;
                }
            }
            else if(seq==3)
            {
                if(s[i]=='w')continue;
                else {
                    f=1;
                    break;
                }
            }
            else
            {
                f=1;
                break;
            }
        }

if(seq!=3)f=1;
        f? cout<<"NO\n" : cout<<"YES\n";
    }

}
