#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum=0,tk;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.compare("donate")==0)
        {
            cin>>tk;
            sum+=tk;
        }
        else if(s.compare("report")==0)
        {
            cout<<sum<<endl;
        }
    }
    return 0;
}
