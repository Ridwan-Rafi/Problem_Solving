#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ln;
    string s;
    cin>>t;
    while(t--){
            cin>>s;
    ln=s.size();

    bool f=0;
    for(int i=1;i<ln;i++)
    {
        if(s[i]!=s[i-1]){
            f=1;
            break;
        }
    }

    f? cout<<ln-1<<'\n' : cout<<-1<<'\n';
    }
    }
