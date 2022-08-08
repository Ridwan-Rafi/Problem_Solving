#include<bits/stdc++.h>
using namespace std;

int t,n,m,k,ar[200001],b[200001],cnt=0,now,chk[200001],in;

int lowerbound(int v,int r,int l)
{
    int mid=(l+r)/2;
    while(l+1<r)
    {
        if(b[mid]<v)
        {
            l=mid;
        }
        else if(b[mid]>v)r=mid;
        else
        {
            return mid;
        }
    }
    return l;

}

int main()
{



int f=0;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<m;i++)cin>>b[i];
    for(int i=0;i<m;i++)chk[i]=0;

    sort(ar,ar+n);
    sort(b,b+m);

for(int i=0;i<n;i++)cout<<ar[i]<<' ';
cout<<endl;
    for(int i=0;i<m;i++)cout<<b[i]<<' ';
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        now=ar[i];
        in=lower_bound(b,b+m,now-k)-b;
        //in--;
        cout<<in<<endl;
        while(chk[in]!=0 || b[in]<now-k )
        {
            in++;
            if(in>=m){
            f=1;
            break;
            }
        }
        if(f==1)break;
        else {
                cnt++;
                chk[in]=1;
                printf("in=%d\n",in);
        }
    }
    cout<<cnt<<endl;
}
