#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    long long int ac,k;
    string s;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        ac=0;
        printf("Case %d:\n",tt);
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(s=="donate")
            {
                cin>>k;
                ac+=k;
            }
            else if(s=="report")
            {
                cout<<ac<<endl;
            }
        }
    }
}
