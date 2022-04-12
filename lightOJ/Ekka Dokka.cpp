#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int w,m,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>w;
        if(w%2==0)
        {
            m=2;
            n=w/2;
            while(n%2==0 || n*m!=w)
            {
                m+=2;
                n=w/m;
            }
            cout<<"Case "<<i<<": "<<n<<' '<<m<<endl;
        }
        else
            cout<<"Case "<<i<<": Impossible\n";
    }
}
