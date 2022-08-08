#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[200011],tm;
    long long int sum;
    map<int,int>m;
    cin>>t;
    while(t--)
    {
        m.clear();
        sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
            {
                cin>>ar[i];
            }
        for(int i=n-1;i>=0;i--)
        {
            tm=ar[i];
            if(m[tm]==0)
            {
                m[tm]++;
            }
            else{
                sum=i+1;
                break;
            }
        }
        cout<<sum<<endl;

    }
}
