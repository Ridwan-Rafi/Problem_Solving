#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,r,b;
    cin>>n>>k;
    char st[n+5],c;

    for(int i=0;i<n;i++)
    {
        cin>>c;
        st[i]=c;
        if(c=='R')r=i;
        else if(c=='B')b=i;
    }
    bool flag=0;
    if(r<b){

        for(int i=r;i<n;i+=k)
        {
            if(st[i]=='#')break;
            else if(st[i]=='B'){
                flag=1;
                break;
            }
        }
    }
    else if(r>b)
    {
        for(int i=b;i<n;i+=k)
        {
            if(st[i]=='#')break;
            else if(st[i]=='R'){
                flag=1;
                break;
            }
        }
    }

    flag? cout<<"Yeah!!\n" : cout<<"Oppss!!\n";
}
