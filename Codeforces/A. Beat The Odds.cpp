#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,evn,tn,odd;
    cin>>t;
    while(t--)
    {
        evn=odd=0;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>tn;
            if(tn%2==0)evn++;
            else odd++;
        }
       cout<<min(evn,odd)<<endl;
    }
}
