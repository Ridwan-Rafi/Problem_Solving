#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ln,ar[30],cnt,c;
    string s;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<30; i++)ar[i]=0;
        n=cnt=0;
        cin>>s;
        ln=s.size();
        for(int i=0; i<ln; i++)
        {
            c=s[i]-'a';
            if(ar[c]==0)
            {
                n++;
                ar[c]=1;
            }
            if(n>3)
            {
                cnt++;
                n=0;
                i--;
                for(int i=0; i<30; i++)ar[i]=0;
            }
        }
        if(n!=0)cnt++;
        cout<<cnt<<endl;
    }
}
