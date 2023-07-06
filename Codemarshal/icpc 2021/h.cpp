#include<bits/stdc++.h>
using namespace std;

long long int add[30];
void zero()
{
    for(int i=0;i<30;i++)add[i]=-1;
}

long long int fact(long long int val)
{
    long long int res;
    if(add[val]!= -1)return add[val];
    else if(val==1 || val==0)return 1;

    res=val* fact(val-1);

    add[val]=res;
    return res;
}

int main()
{
    long long int res,t,n,k,casee=1;
    cin>>t;
    while(t--)
    {
        zero();
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>k;
        res=fact(n);
        cout<<"Case "<<casee++<<": "<<res<<'\n';
    }
}
