#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,ar[6000],cnt=0,mx=-1;
    map<long long,int>m;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        m[ar[i]]++;
    }
    sort(ar,ar+n);
    cnt=m[ar[n-1]];
    mx=cnt;
    //cout<<cnt<<' '<<ar[n-1]<<endl;
    for(int i=n-2;i>=0;i--)
    {
        if(mx<m[ar[i]])
        {
            cnt+=m[ar[i]]-mx;
        }
        mx=max(mx,m[ar[i]]);
    }
    cout<<cnt<<"\n";

}
