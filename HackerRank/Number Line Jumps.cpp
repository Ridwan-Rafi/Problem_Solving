#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,v1,v2,flag=0;
    cin>>x1>>v1>>x2>>v2;
    for(int i=0;i<1000000;i++)
    {
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2)
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"NO"<<endl;
        return 0;
}
