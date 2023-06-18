#include<bits/stdc++.h>
using namespace std;


int main()
{


    long long int t,n,m,val;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,bb,mn=INT_MAX,mx=INT_MIN,mx1=INT_MIN,mn1=INT_MAX,mid;
        cin>>n>>m;
        vector<int>k;
        for(int i=0; i<n; i++)
        {
            cin>>val;
            k.push_back(val);
            //mn=min(mn,abs(val));
            //mx=max(mx,abs(val));
            mn1=min(mn1,val);
            mx1=max(mx1,val);
        }
        sort(k.begin(),k.end());

        for(int i:k)
        {
            if(i>=0)
            {
                mid=i;
                break;
            }
        }

        bool f;
        long long int ac;
        for(int i=0; i<m; i++)
        {
            cin>>a>>bb>>c;
            ac=4LL*a*c;
            f=0;

            b=bb;
            b=b-mn1;
            b*=b;
            if(f==0 && b-ac<0 )
            {
                f=1;
                cout<<"YES\n"<<mn1<<'\n';
            }

            b=bb;
            b=b-mx1;
            b*=b;
            if(f==0 && b-ac<0 )
            {
                f=1;
                cout<<"YES\n"<<mx1<<'\n';
            }

            b=bb;
            b=b-mid;
            b*=b;
            if(f==0 && b-ac<0 )
            {
                f=1;
                cout<<"YES\n"<<mid<<'\n';
            }

            if(f==0)cout<<"NO\n";
        }
    }
}
