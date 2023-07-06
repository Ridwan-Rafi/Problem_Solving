#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int ar[n+5],sum=0,val;
        for(int i=0; i<n; i++)cin>>ar[i];
        multiset<long long int>st;

        for(int i=0; i<n; i++)
        {
            if(ar[i]>0)st.insert(-ar[i]) ;
            else if(ar[i]==0)
            {
                if(!st.empty())
                {
                    val=(*st.begin())*(-1);
                   // cout<<val<<endl;
                    sum+=val;
                    st.erase(st.begin());
                }
            }
        }
cout<<sum<<'\n';
    }
}
