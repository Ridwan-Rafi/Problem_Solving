#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<string,int> cntry,chef;
    map<string,string>chefcnt;

    int n,m,mxc=-1,mxcf=-1;
    string name,cntr,fcntry,fchef;

    cin>>n>>m;
    while(n--)
    {
        cin>>name>>cntr;
        chefcnt[name]=cntr;
    }
    while(m--)
    {
        cin>>name;
        chef[name]++;
        cntr=chefcnt[name];
        cntry[cntr]++;
    }

    for(auto i=cntry.begin();i!=cntry.end();i++)
    {

      //  cout<<i->first<<' '<<i->second<<endl;
        if(i->second>mxc)
        {
            mxc=i->second;
            fcntry=i->first;
        }
    }
    //cout<<"\n";
    for(auto i=chef.begin();i!=chef.end();i++)
    {

        //cout<<i->first<<' '<<i->second<<endl;
        if(i->second>mxcf)
        {
            mxcf=i->second;
            fchef=i->first;
        }
    }
    cout<<fcntry<<"\n"<<fchef<<"\n";
}
