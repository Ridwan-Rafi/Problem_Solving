#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,c,d;
    cin>>t;
    while(t--)
    {
        int dupl=0,missin=0,have;
        set<int>s;

        cin>>n>>c>>d;
        int ar[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(s.count(ar[i]))dupl++;
            s.insert(ar[i]);
        }
        cout<<dupl<<endl;
        n=s.size();
        int pre=0,indx=1;
        long long int remCost,inCost=0,mn=9999999999999999,push,np;
        for(int i:s)
        {
            if(i-pre>1){
                np=i-pre-1;
                inCost+=(np*d);
                pre=i;
            }
            pre=i;
            remCost=(n-indx)*c;
            cout<<indx<<' '<<inCost<<' '<<remCost<<endl;
            indx++;
        }

    }
}
