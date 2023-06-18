#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int ln,mid,r,l;
    while(cin>>s)
    {
        ln=s.size();
        mid=ln/2;
        if((ln&1)==1)
        {
            l=mid-1;
            r=mid+1;
        }
        else
        {
            l=mid-1;
            r=mid;
        }
        int zog=0;
        while(l>=0 && r<ln)
        {
            for(int i=0; i<zog; i++)
            {
                s[r]++;
                if(s[r]>'z')s[r]='a';
            }

            if(s[r]!=s[l])
            {
                while(s[r]!=s[l])
                {
                    s[r]++;
                    if(s[r]>'z')s[r]='a';
                    zog++;
                }
            }

            l--;
            r++;
        }

        cout<<zog<<'\n';

    }
}
