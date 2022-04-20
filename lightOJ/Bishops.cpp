#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,c,r,cc,rr,sum,s2;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        cin>>c>>r>>cc>>rr;
        sum=c+r;
        s2=cc+rr;
        if(sum%2==s2%2)
        {
            if(abs(c-cc)==abs(r-rr))
                printf("Case %d: %d\n",i,1);
            else
                printf("Case %d: %d\n",i,2);
        }
        else
                printf("Case %d: impossible\n",i);
    }
}
