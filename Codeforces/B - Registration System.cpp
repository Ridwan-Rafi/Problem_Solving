#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    map<string,int>m;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(m[s]>0)
        {
            cout<<s<<m[s]<<"\n";
        }
        else cout<<"OK\n";
        m[s]++;
    }
}
