#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[100000],i=0,f=0;
    cin>>n;
    if(n==0)cout<<10<<endl;
    else if(n==1)cout<<1<<endl;
    else
    {
        while(n!=1)
        {
            for(int j=9; j>1; j--)
            {
                if(n%j==0)
                {
                    f=1;
                    ar[i++]=j;
                    n/=j;
                    break;
                }
                f=0;
            }
            if(f==0)break;
        }
        if(f==0)printf("-1\n");
        else
        {
            for(int j=i-1; j>=0; j--)cout<<ar[j];
            cout<<endl;
        }
    }
}
