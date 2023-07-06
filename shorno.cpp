#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ln;
    cin>>s;
    ln=s.size();
    if(ln<=2)
    {
        cout<<"Not accepted\n"<<endl;
    }
    else
    {
        if(s[ln-1]=='b' && s[ln-2]=='b' && s[ln-3]=='a')
        {
            bool f=0;
            for(int i=ln-4; i>=0; i--)
            {
                if(s[i]!='a' && s[i]!='b')
                {
                    f=1;
                    break;
                }
            }
            if(f==0)cout<<"Accepted under (a|b)*abb\n";
            else cout<<"Not accepted\n"<<endl;
        }
        else
        {
            cout<<"Not accepted\n"<<endl;
        }
    }
}
