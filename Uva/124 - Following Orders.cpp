#include<iostream>
#include<string>
#include<stdbool.h>
#include<vector>
#include<set>
using namespace std;

vector<int>ch[50];
set<int>ss;

bool arr[30][30];
void zero()
{

    for(int i=0;i<30;i++)
    {
         ch[i].clear();
        for(int j=0;j<30;j++)
            arr[i][j]=false;
    }
}

void per(string s,int l,int r)
{
    int ll,rr;
    if(l==r){
        cout<<s<<endl;
    }
    else{
    for(int i=l;i<r;i++)
    {
        ll=s[l]-'a';
        rr=s[i]-'a';
        if(arr[rr][ll]==false && arr[ll][rr]==false)
        {
            printf("check arr[%d][%d]=%d  arr[%d][%d]=%d\n",rr,ll,arr[rr][ll],ll,rr,arr[ll][rr]);
        swap(s[l],s[i]);
        per(s,l+1,r);
        swap(s[l],s[i]);
        }
        //else return;
    }
    }
    return ;
}

void trac(int n,int beg)
{
    if(ch[n].empty())
        return;
    else{
        int t;
        for(auto i=ch[n].begin();i!=ch[n].end();i++){
        t=*i;

        printf("56 arr[%d][%d]=true\n",beg,t);
        arr[beg][t]=true;
        ch[beg].push_back(t);
        trac(t,beg);
        }
    }
}

string rem(string s,int ln)
{

    for(int i=0;i<ln;i++)
    {
        if(s[i]==' ')
        {
            s.erase(s.begin()+i);
        }
    }
    return s;
}

void tick(string con)
{
    int ln,l,r,t;
    ln=con.size();
    for(int i=0;i<ln;i+=4)
    {
        l=con[i]-'a';
        r=con[i+2]-'a';
        //cout<<l<<' '<<r<<endl;
        ch[l].push_back(r);
        ss.insert(l);
        ss.insert(r);
        printf("88 arr[%d][%d]=true\n",l,r);
        arr[l][r]=true;
    }

    for(int i:ss)
    {
        //cout<<i<<endl;
        if(!ch[i].empty()){
        t=ch[i].front();
        //cout<<t<<endl;
        trac(t,i);
        }
    }

    /* for(int i:ss)
    {
        cout<<endl<<i<<endl;
        for(auto l = ch[i].begin();l!=ch[i].end();l++)
        {
            cout<<*l<<' ';
        }

    }*/
}

int main()
{
    string s,con;
    int ln;
    while(getline(cin,s))
    {
        zero();
        s=rem(s,s.size());

        getline(cin,con);
        tick(con);
        cout<<con<<endl;

        per(s,0,s.size());

    }
}
