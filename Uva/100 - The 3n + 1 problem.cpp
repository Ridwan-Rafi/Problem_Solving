#include<bits/stdc++.h>
using namespace std;
int cycle(int n)
{
    int c=0;
    while(1)
    {
        c++;
        if(n==1) break;
        else if(n%2==1) n=(3*n)+1;
        else {n=n/2;}
    }
   return c;
}
int main()
{
    int i1,i2,s,e,n;
    while(cin>>i1>>i2)
    {
        if(i1>i2){ s=i2; e=i1; }
        else{ s=i1; e=i2; }
        int c=0,high=0;
        for(int i=s; i<=e; i++)
        {
            c=cycle(i);
            if(c>high)
            high=c;
        }
           cout<<i1<<" "<<i2<<" "<<high<<endl;
    }
    return 0;
}
