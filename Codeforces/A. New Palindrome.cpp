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
    int ind;
    for(int i=1;i<ln;i++)
    {
        if(s[i]!=s[i-1]){
            f=1;
            ind=i;
            break;
        }
    }

    if(f==0) cout<<"NO\n";
    else if(f==1 && ln%2==1 && ind==ln/2)
    {
        cout<<"NO\n";
    }
    else cout<<"YES\n";
}
}
