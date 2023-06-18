#include<bits/stdc++.h>
using namespace std;
int main()
{
    int up[30],low[30];
    int n,ln,casee=1,ind,space;
    cin>>n;
    string d,s,dd;
    d="Digital Platforms";
    dd="SELISE";
    cin.ignore();
    while(n--)
    {

        bool f=0,ff=0;
        space=0;
        for(int i=0; i<30; i++)
        {
            up[i]=0;
            low[i]=0;
        }

        getline(cin,s);
        ln=s.size();
       // cout<<s<<endl;
        for(int i=0; i<ln; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                ind=s[i]-'a';
                low[ind]++;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                ind=s[i]-'A';
                up[ind]++;
            }
            else if(s[i]==' ')space++;
        }

        //cout<<space<<endl;
        for(int i=0; i<dd.size(); i++)
        {
            ind=dd[i]-'A';
            if(up[ind]<=0)f=1;
            else up[ind]--;
        }

        for(int i=0; i<d.size(); i++)
        {
            if(d[i]>='a' && d[i]<='z')
            {
                ind=d[i]-'a';
                if(low[ind]<=0)ff=1;
                else low[ind]--;
            }
            else if(d[i]>='A' && d[i]<='Z')
            {
                ind=d[i]-'A';
                if(up[ind]<=0)ff=1;
                else up[ind]--;
            }
        }

        cout<<"Case "<<casee++<<": ";
        if(space>=2)
        {
            if(f==0 && ff==0)cout<<"BOTH\n";
            else if(f==0)cout<<"SELISE\n";
            else cout<<"NONE\n";
        }
        else
        {
            if(f==0)cout<<"SELISE\n";
            else cout<<"NONE\n";
        }
    }
}
