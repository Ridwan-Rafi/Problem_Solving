#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[100000],i=0;
    cin>>n;
    while(n!=1)
    {
        for(int j=2;j<10;j++)
        {
            if(n%j==0)
            {
                ar[i++]=j;
                n/=j;
                break;
            }
        }
    }
    for(int j=0;j<i;j++)cout<<ar[j];
}
