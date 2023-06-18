#include<bits/stdc++.h>
using namespace std;
vector<tuple<long long int,long long int,long long int>> ls;
long long int ful[1111];
long long int need;

void clen()
{
    for(int i=0; i<1011; i++)ful[i]=0;
}

long long int many(long long int time,long long int t,long long int inf,long long int rest)
{
    long long int a,left,done,ext=0,d=0;

    a=t*inf;
    a+=rest;
    done=time/a;
    left=time%a;

    done*=inf;
    while(left>0)
    {
        ext=left/(inf*t);
        d+=ext*inf;
        left%=(inf*t);
        left-=rest;
    }
    return done+d;
}

bool isPossible(long long int time)
{
    long long int cnt=0,t,inf,rest,have,ind=0;
    clen();
    for(auto [t,inf,rest] : ls)
    {
        //cout<<t<<' '<<inf<<' '<<rest<<"\n";
        if(t<=time)
        {
            have=many(time,t,inf,rest);
            //cout<<have<<endl;
            cnt+=have;
            ful[ind]=have;
            if(cnt>=need)return true;
        }
        ind++;
    }

    if(cnt>=need)return true;
    return false;
}

void stabl(int n)
{
    long long int sum=0;
    bool f=0;

    for(int i=0; i<n; i++)
    {
        sum+=ful[i];
        if(f==1)ful[i]=0;
        else if(sum==need)f=1;
        else if(sum>need)
        {
            ful[i]-=(sum-need);
            f=1;
        }
    }
}

int main()
{
    long long int m,n,t,y,z;
    long long int mx=-1;
    cin>>m>>n;
    need=m;

    for(int i=0; i<n; i++)
    {
        cin>>t>>y>>z;
        ls.push_back({t,y,z});
    }

    long long int l=0,r=1e18,mid;

    mid=(l+r)/2;
    while(l+1<r)
    {
        isPossible(mid) ? r=mid : l=mid ;
        //cout<<"\n";
        mid=(l+r)/2;
    }

    if(isPossible(l))
    {
        stabl(n);
        cout<<l<<endl;
        for(int i=0; i<n; i++)cout<<ful[i]<<' ';
    }
    else if(isPossible(r))
    {
        stabl(n);
        cout<<r<<endl;
        for(int i=0; i<n; i++)cout<<ful[i]<<' ';
    }
}
