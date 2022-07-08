#include<bits/stdc++.h>
using namespace std;

bool div(string a,int lna,int b,int lnb)
{
    long long int na=0,v,j,gf;
    string vf,tm;
    for(int i=0; i<lnb; i++)
        na=(na*10)+(a[i]-'0');
    j=lnb;
    while(j<=lna)
    {
        v=na/b;
        if(v==0 && j==lna)break;
        else if(v==0){
            na=(na*10)+(a[j]-'0');
            j++;

        }
        else{
        tm=to_string(v);
        vf+=tm;
        gf=v*b;
        na=na-gf;
        }
    }
   // cout<<vf<<endl;
    //printf("na= %d\n",na);
if(na==0)
return true;
else return false;
}

int main()
{
    int t;
    string a;
    int lna,lnb;
    long long int na,b;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
        cin>>a>>b;
        lna=a.size();
        b=abs(b);
        lnb=log10(b);
        lnb++;

        if(a[0]=='-')
        {
            for(int i=1;i<lna;i++)
                a[i-1]=a[i];
            lna--;
        }


        if(lna==1 && a[0]=='0')printf("Case %d: divisible\n",tt);
        else if(lna<lnb)printf("Case %d: not divisible\n",tt);
        else if(lna==lnb)
        {
            na=0;
            for(int i=0; i<lna; i++)
                na=(na*10)+(a[i]-'0');
            if(na%b==0)
                printf("Case %d: divisible\n",tt);
            else printf("Case %d: not divisible\n",tt);
        }
        else
        {
            if(div(a,lna,b,lnb))
            {
                printf("Case %d: divisible\n",tt);
            }
            else
                printf("Case %d: not divisible\n",tt);
        }
    }
}
