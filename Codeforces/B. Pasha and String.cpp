#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>m;
    vector<int>qq;
    string s;
    int t,q,ln,ar[100011],l,r,rr,mm;
    cin>>s;
    ln=s.size();
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>mm;
        m[mm]++;
    }

    for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second % 2==0)continue;
        l=it->first;
        r=ln-l+1;
        //cout<<l<<' '<<r<<endl;
        l--;
        r--;
        for(int i=l;i<r;i++,r--)
        {
            swap(s[i],s[r]);
        }
    }
    cout<<s<<endl;
}
