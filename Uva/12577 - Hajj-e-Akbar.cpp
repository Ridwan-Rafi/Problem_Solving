#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i=1;
    while(cin>>s)
    {
        if(s[0]=='*')break;
        else if(s.compare("Hajj")==0)cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        else{cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;}
        i++;
    }
    return 0;
}
