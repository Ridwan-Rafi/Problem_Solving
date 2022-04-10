#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,f,a,b,c,sum;
    cin>>t;
    while(t--)
    {sum=0;
        cin>>f;
        while(f--)
        {
            cin>>a>>b>>c;
            sum=sum+(a*c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
