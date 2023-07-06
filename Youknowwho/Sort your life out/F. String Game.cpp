#include<bits/stdc++.h>
using namespace std;

int ln,n,val;
int ar[200011],ter;
string s,ss;
char ch;

bool isPossible(int mid)
{
    string a=s;
    vector<int>vc;

    for(int i=0; i<mid; i++)vc.push_back(ar[i]);

    sort(vc.begin(),vc.end(),greater<int>());

    for(int i:vc)
    {
        //cout<<i<<endl;
        i--;
        a.erase(a.begin()+i);
    }

    //cout<<mid<<' '<<a<<endl;

    //check sub sequence
    bool y=false;
    int ln=a.size(),ind=0,sln=ss.size();
    for(int i=0;i<ln;i++)
    {
        if(a[i]==ss[ind])
            ind++;
        if(ind>=sln)return true;
    }

     return false;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cin>>s>>ss;
    n=s.size();

    for(int i=0; i<n; i++)cin>>ar[i];

    int l=0,r=n-1,mid;

    mid=(l+r)/2;

    while(l+1 < r)
    {

        if(isPossible(mid))
            l = mid;
        else r = mid;
        mid=(l+r)/2;
    }

    cout<<(isPossible(r) ? r : l)<<endl;
}
