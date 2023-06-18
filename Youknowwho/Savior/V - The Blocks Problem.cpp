#include<bits/stdc++.h>
using namespace std;

map<int,vector<int>>mp;
int pos[30];

void restor(vector<int> &vc,int n)
{
    bool f=0;
    int rs=0;


    for(int i:vc)
    {
        if(f==0)rs++;
        else
        {
            pos[i]=i;
            mp[i].push_back(i);
        }
        if(i==n)
        {
            f=1;
        }
    }
    //cout<<rs<<endl;
    vc.resize(rs);

}


void  pile()
{
    int a,b,tab,rm,posb;
    vector<int>pl;

    string s;
    cin>>a>>s>>b;
    if(pos[a]==pos[b])return;

    if(s=="onto")
    {
        posb=pos[b];
        restor(mp[posb],b);

        tab=pos[a];
        pl=mp[tab];

        bool f=0;
        rm=0;
        for(int i:pl)
        {
            if(i==a)
                f=1;

            if(f==1)
            {
                mp[posb].push_back(i);
                pos[i]=posb;
            }
            else rm++;
        }
        mp[tab].resize(rm);
    }
    else
    {
        posb=pos[b];

        tab=pos[a];
        pl=mp[tab];

        bool f=0;
        rm=0;
        for(int i:pl)
        {
            if(i==a)
                f=1;

            if(f==1)
            {
                mp[posb].push_back(i);
                pos[i]=posb;
            }
            else rm++;
        }
        mp[tab].resize(rm);
    }
}

void movee()
{
    int a,b,tab;
    string s;
    cin>>a>>s>>b;
    if(pos[a]==pos[b])return;

    if(s=="onto")
    {
        tab=pos[a];
        restor(mp[tab],a);
        mp[tab].pop_back();

        tab=pos[b];
        restor(mp[tab],b);

        mp[tab].push_back(a);
        pos[a]=tab;
    }
    else
    {
        tab=pos[a];
        restor(mp[tab],a);
        mp[tab].pop_back();

        tab=pos[b];
        mp[tab].push_back(a);
        pos[a]=tab;
    }

}

void print()
{
    for(auto vc:mp)
    {
        cout<<vc.first<<":";
        for(auto i:vc.second)cout<<' '<<i;
        cout<<'\n';
    }
}


int main()
{
    for(int i=0; i<30; i++)pos[i]=i;

    int n,a,b;
    string s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        mp[i].push_back(i);
    }
    //print();
    while(cin>>s && s!="quit")
    {
        if(s=="move")movee();
        else if(s=="pile")pile();
    }
    print();
    return 0;
}
