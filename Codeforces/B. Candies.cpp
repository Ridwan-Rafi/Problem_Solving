#include<bits/stdc++.h>
using namespace std;

vector<int>vc;

void res(long long int n)
{
    bool b;
    int num=n/2;
   while(num!=0)
   {
       b=num&1;
       if(b==1)vc.push_back(2);
       else vc.push_back(1);
       num=num>>1;
   }
   reverse(vc.begin(),vc.end());
   cout<<vc.size()<<'\n';
   for(int i:vc)cout<<i<<' ';
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        vc.clear();

        cin>>n;

        if((n&1)==0)cout<<-1<<'\n';
        else
        {
            res(n);
            cout<<'\n';
        }
    }
}
