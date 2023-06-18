#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll x;
    while(cin>>x)
    {
        ll p=1;
        bool f=0; //0 for stan

        int jit=-1,ret; //0 for stan

        ret=ceil((double)x/9.0);

        if(ret%2==0)cout<<"Ollie wins.\n";
        else cout<<"Stan wins.\n";
    }
}
