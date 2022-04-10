#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    string s;
    while(cin>>s)
    {
        if(s[0]=='#')break;
    else if(s.compare("HELLO")==0)cout<<"Case "<<i<<": ENGLISH"<<endl;
    else if(s.compare("HOLA")==0)cout<<"Case "<<i<<": SPANISH"<<endl;
    else if(s.compare("HALLO")==0)cout<<"Case "<<i<<": GERMAN"<<endl;
    else if(s.compare("BONJOUR")==0)cout<<"Case "<<i<<": FRENCH"<<endl;
    else if(s.compare("CIAO")==0)cout<<"Case "<<i<<": ITALIAN"<<endl;
    else if(s.compare("ZDRAVSTVUJTE")==0)cout<<"Case "<<i<<": RUSSIAN"<<endl;
    else
        cout<<"Case "<<i<<": UNKNOWN"<<endl;
    i++;
    }
    return 0;
}
