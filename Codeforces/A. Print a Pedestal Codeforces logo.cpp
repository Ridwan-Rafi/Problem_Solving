#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,bb,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=b=c=n/3.0;
        bb=n%3;
        if(bb==0)
        {
            c++;
            //b--;
            a--;
        }
        else if(bb==1)
        {
            c+=2;
           // b++;
            a--;
        }
        else if(bb==2){
            c+=2;
            b++;
            a--;
        }
        cout<<b<<' '<<c<<' '<<a<<endl;
    }
}
