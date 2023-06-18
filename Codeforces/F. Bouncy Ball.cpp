#include<bits/stdc++.h>
using namespace std;

int n,m,si,sj,di,dj,bounce=0;
bool u,r,found=0,fbnc=0;

void solve()
{
    int ln=n*m*4;
    bool bnc=0;

    if(si==di && sj==dj)
        {
            found=1;
            return;
        }


    for(int i=0; i<ln; i++)
    {
        if(si<1)si=2;
        if(si>n)si-=2;
        if(sj>m)sj-=2;
        if(sj<1)sj=2;
        if(si==di && sj==dj)
        {
            bounce++;
            found=1;
            return;
        }

        bnc=0;

        if(u==1)
        {
            si--;
            if(si<=1)
            {
                u=0;
                bnc=1;
            }
        }
        else
        {
            si++;
            if(si>=n)
            {
                u=1;
                bnc=1;
            }

        }

        if(r==1)
        {
            sj++;
            if(sj>=m)
            {
                r=0;
                bnc=1;
            }

        }
        else
        {
            sj--;
            if(sj<=1)
            {
                r=1;
                bnc=1;
            }

        }


        if(bnc==1)
        {
            bounce++;
           // cout<<"bounce "<<si<<' '<<sj<<endl;
        }
        if(si==di && sj==dj)
        {
            found=1;
            return;
        }
       // cout<<si<<' '<<sj<<endl;
    }
}

int main()
{
    int t;
    char up,left;
    cin>>t;
    while(t--)
    {
        found=0;
        bounce=fbnc=0;
        cin>>n>>m>>si>>sj>>di>>dj>>up>>left;
        if(up == 'U')u=1;
        else u=0;

        if(left == 'L')r=0;
        else r=1;


        solve();

        if(found==1)
        {
            if(di==n || dj == m || di==1 || dj==1)bounce--;
            cout<<bounce<<endl;
        }
        else cout<<-1<<endl;
    }
}
