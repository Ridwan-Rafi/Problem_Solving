
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,x2,y1,y2,cow,cowx,cowy;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x1>>y1>>x2>>y2>>cow;
        cout<<"Case "<<i<<":"<<endl;
        while(cow--)
        {
            cin>>cowx>>cowy;
            if(cowx>x1 && cowy>y1 && cowx<x2 && cowy<y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
        return 0;
}
