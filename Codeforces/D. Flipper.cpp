#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void solve()
{
    int n;
    cin>>n;
    int ar[n+4],mx=-1,ind,smx=-1,sind;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        if(mx<ar[i])
        {
            mx=ar[i];
            ind=i;
        }
        else if(smx<ar[i]){
            smx=ar[i];
            sind=i;
        }
    }
if(n==1){
        cout<<ar[0]<<endl;
        return;
}
    if(ind==0)
    {
        mx=smx;
        ind=sind;
    }

//cout<<mx<<' '<<ind<<endl;
    vector<int>mxv,res,mn,tm,ans;

    for(int i=ind; i<n; i++)ans.push_back(ar[i]);
    for(int i=0; i<ind; i++)mxv.push_back(ar[i]);
    res.push_back(0);

    if(ind==n-1)
    {
        for(int i=ind; i>=0; i--)
        {
            if(i!=ind)
            {
                tm.push_back(mxv[i]);
                mn.clear();
                mn=tm;
            }
            for(int j=0; j<i; j++)
            {
                mn.push_back(mxv[j]);
            }

            res=max(res,mn);
           // for(int l:mn)cout<<l<<' ';
            //cout<<endl;
        }
        //cout<<"\n\n";
        for(int l:res)ans.push_back(l);
    }
    else
    {
        for(int i=ind-1; i>=0; i--)
        {

            tm.push_back(mxv[i]);
            mn.clear();
            mn=tm;
            for(int j=0; j<i; j++)
            {
                mn.push_back(mxv[j]);
            }

            res=max(res,mn);
           // for(int l:mn)cout<<l<<' ';
           // cout<<endl;
        }
       // cout<<"\n\n";
        for(int l:res)ans.push_back(l);
    }

    for(int l:ans)cout<<l<<' ';
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
}

