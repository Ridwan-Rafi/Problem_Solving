#include<iostream>
using namespace std;
int main()
{
    long long int t,cnt,a,b,ac,bc, aa,bb;;

    cin>>t;
    for(int i=1;i<=t;i++)
    {

        cin>>a>>b;
        aa=a/3;
        bb=b/3;

        ac=aa*2;
        if(a%3==0)ac--;


        bc=bb*2;
        if(b%3==2)bc++;
        //cout<<"Case "<<i<<": "<<bc-ac<<endl;
        printf("Case %d: %lld\n",i,bc-ac);

    }
}
