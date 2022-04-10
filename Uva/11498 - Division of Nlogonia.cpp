#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,m,n,x,y;
    while(cin>>q)
    {
        if(q==0)
            break;
        cin>>n>>m;
        for(int i=0; i<q; i++)
        {
            cin>>x>>y;
            if(x>n && y>m)
                cout<<"NE"<<endl;
            else if(x>n && y<m)
                cout<<"SE"<<endl;
            else if(x<n && y<m)
                cout<<"SO"<<endl;
            else if(x<n && y>m)
                cout<<"NO"<<endl;
            else
                cout<<"divisa"<<endl;
        }
    }
    return 0;
}
