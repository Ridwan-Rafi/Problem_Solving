#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("buckets.in","r",stdin);
    freopen("buckets.out","w",stdout);

    int bx,by,rx,ry,lx,ly;
    char c;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
        cin>>c;
        if(c=='R'){
            rx=i;ry=j;
        }
        else if(c=='B'){
        bx=i;by=j;
        }
        else if(c=='L'){
            lx=i;ly=j;
        }
        }
    }
    if(bx==lx)
    {
        if(bx==rx)
        {
            if((ry>by && ry<ly)||(ry<by && ry>ly))cout<<abs(by-ly)+1<<endl;
            else cout<<abs(by-ly)-1<<endl;
        }
        else cout<<abs(by-ly)-1<<endl;
    }
    else if(by==ly)
    {
        if(by==ry)
        {
            if((rx>bx && rx<lx)||(rx<bx && rx>lx))cout<<abs(bx-lx)+1<<endl;
        else cout<<abs(bx-lx)-1<<endl;
        }
        else cout<<abs(bx-lx)-1<<endl;
    }
    else{
        cout<<abs(bx-lx)+abs(ly-by)-1<<endl;
    }
}
