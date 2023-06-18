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

        int jit=-1; //0 for stan
        while(1)
        {
            if(f==0)
            {
                if(p*9>=x)
                {
                    jit=0;
                    break;
                }
                else if(p*9*9<x)p*=9;
                else if(p*9*8<x)p*=8;
                else if(p*9*7<x)p*=7;
                else if(p*9*6<x)p*=6;
                else if(p*9*5<x)p*=5;
                else if(p*9*4<x)p*=4;
                else if(p*9*3<x)p*=3;
                else p*=2;
                f=1;
            }
            else
            {
                if(p*9>=x)
                {
                    jit=1;
                    break;
                }
                else if(p*9*9<x)p*=9;
                else if(p*9*8<x)p*=8;
                else if(p*9*7<x)p*=7;
                else if(p*9*6<x)p*=6;
                else if(p*9*5<x)p*=5;
                else if(p*9*4<x)p*=4;
                else if(p*9*3<x)p*=3;
                else p*=2;
                f=0;
            }
        }

        if(jit==1)cout<<"Ollie wins.\n";
        else cout<<"Stan wins.\n";
    }
}
