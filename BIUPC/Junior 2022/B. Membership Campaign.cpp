#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,casee=1;
    double dis;

    cin>>t;
while(t--)
{
    cin>>a>>b>>c;

    dis= 1.5 * (a+b+c);

    cout<<"Case "<<casee++<<": "<<round(150-dis)<<'\n';
}
}
