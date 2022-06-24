#include<bits/stdc++.h>
using namespace std;
long long int c(int n)
{
    int cnt=n;
    long long int nm=1;
   // printf("cnt %d\n",cnt);
    while(cnt--)
    {
        nm*=10;
        nm+=1;
    }
    return nm;
}
long long int cc(int n)
{
    int cnt=n;
    long long int nm=1;
   // printf("cnt %d\n",cnt);
    while(cnt--)
    {
        nm*=10;
    }
    nm+=1;
    return nm;
}

int main()
{
    int t,n,m;
    long long int lm,ans;
    cin>>t;
    while(t--)
    {
        lm=9;
        cin>>n>>m;
        for(int i=1;i<n;i++)
        {
            lm*=10;
            lm+=9;
        }
//cout<<lm<<endl;
ans=c(n)-m;
if(ans>lm)
    ans=cc(n)-m;
        cout<<ans<<endl;
    }
}


