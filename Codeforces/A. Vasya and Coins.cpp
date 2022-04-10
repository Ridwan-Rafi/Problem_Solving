#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,minn,maxx;
    cin>>t;
    while(t--)
    {
        minn;
        cin>>a>>b;
        if(a==0)
                    cout<<1<<endl;
        else{
            minn=a+(b*2);
            cout<<minn+1<<endl;
        }
    }
}
