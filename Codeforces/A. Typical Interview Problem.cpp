#include<bits/stdc++.h>
using namespace std;

string glob;
void gener(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i%3==0 && i%5==0)glob+="FB";
        else if(i%5==0)glob+='B';
        else if(i%3==0)glob+='F';
    }
}
int main()
{
    gener(100);
    //cout<<glob<<endl;
    int t,n,ln;
    string s;
    ln=glob.size();
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        bool f=0,ff=0;
        for(int i=0; i<ln; i++)
        {
            if(s[0]==glob[i])
            {
                f=0;
                for(int j=0,l=i; j<n; j++,l++)
                {
                    //cout<<s[j]<<' '<<glob[l]<<' '<<l<<endl;
                    if(s[j]!=glob[l])
                    {
                        f=1;
                        //cout<<j<<' '<<l<<endl;
                        break;
                    }
                }
                if(f==0)ff=1;
            }


        }

        (ff)? cout<<"YES\n" :cout<<"NO\n";
    }
}
