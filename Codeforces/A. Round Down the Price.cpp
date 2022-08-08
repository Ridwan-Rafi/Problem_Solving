#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,d,nn;
    cin>>t;
    while(t--)
    {
        nn=1;
        cin>>n;
        d=log10(n);
        d++;
        for(int i=1;i<d;i++)
            nn*=10;
        cout<<abs(nn-n)<<endl;
    }
}
