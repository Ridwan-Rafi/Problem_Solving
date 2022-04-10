#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ses;
    while(cin>>n)
    {
        int fsum=0,ssum=0,sum=0;
        if(n==0) break;
        while(n!=0)
        {
            ses=n%10;
            sum=sum+ses;
            n=n/10;
        }
        fsum=fsum+(sum%10);
        fsum=fsum+(sum/10);
        ssum=ssum+(fsum%10);
        ssum=ssum+(fsum/10);
    cout<<ssum<<"\n";
    }
    return 0;
}
