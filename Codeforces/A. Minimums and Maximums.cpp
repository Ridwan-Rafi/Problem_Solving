#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l1,r1,l2,r2;

    cin>>t;
    while(t--)
    {
            cin>>l1>>r1>>l2>>r2;
            if(l1<=l2 && r1>=l2)cout<<l2<<endl;
            else if(l2<=l1 && r2>=l1)cout<<l1<<endl;
            else cout<<l1+l2<<endl;
    }
}
