#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,q,d;
    bool leaked;
    char ans;

    int sus;

    cin>>t;
    while(t--)
    {
        vector<int>lk,sol;
        sus=0;
        cin>>q;
        for(int i=0;i<q;i++)
            {
                cin>>d>>leaked>>ans;
                if(leaked && ans=='c')lk.push_back(d);
                else if(!leaked && ans=='i')sol.push_back(d);
            }

        sort(lk.begin(),lk.end(),greater<int>());
        sort(sol.begin(),sol.end());

        for(int i:sol)
        {
            for(int j:lk)
            {
                if(j>i)sus++;
                else break;
            }
        }
        cout<<sus<<'\n';
    }
}
