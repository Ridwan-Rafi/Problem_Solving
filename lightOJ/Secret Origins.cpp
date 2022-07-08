#include<bits/stdc++.h>
using namespace std;
int bb;
int cn(long long int n)
{
    int cnt=0,f=0;
    long long int a;
    while(n!=0)
    {
        a=n&1;
        if(a==1)
        {
            f=1;
            bb++;
        }

        if(a==0 && f==1)
            break;
        else
        {
            cnt++;
        }
        n=n>>1;
    }
    //printf("bb= %d\n",bb);
    return cnt;
}

int main()
{
    long long int n,cnt,bit;
int t;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
        bit=1;
        bb=0;
        cin>>n;
        cnt=cn(n);
        bit=bit<<cnt;
        n=n|bit;
        bit=1;
      //  cout<<cnt<<endl;
        for(int i=0; i<cnt; i++)
        {
            n=n&(~bit);
            bit=bit<<1;
        }
        bit=1;

        //cout<<bb<<' '<<n<<endl;

        for(int i=1; i<bb; i++)
        {
            n=n|bit;
            bit=bit<<1;
        }
        printf("Case %d: %lld\n",tt,n);
    }
}
