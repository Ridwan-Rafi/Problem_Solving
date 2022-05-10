#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,val,b;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        val=(s[0]-'a'+1)*25;
        b=abs(s[1]-'a'-25);
        val=val-b;
        if(s[0]>s[1])val++;
        cout<<val<<endl;
    }
}
