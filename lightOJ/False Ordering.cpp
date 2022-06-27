#include<bits/stdc++.h>
using namespace std;
struct nm
{
    int n,c;
};

int cn(int n)
{
    int s=sqrt(n),cnt=0;
    for(int i=1; i<=s; i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}

bool cmp(nm x,nm y)
{
    if(x.c<y.c)return true;
    else if(x.c==y.c && x.n>y.n)return true;
    else return false;

}

int main()
{
    int n,t,ar[1111];
nm r[1111];

    for(int i=1; i<=1000; i++)
    {
        r[i].c=cn(i);
        r[i].n=i;
        //printf("%d  %d\n",i,ar[i]);
        //getchar();
    }

sort(r+1,r+1000+1,cmp);

//for(int i=1;i<10;i++)
//    printf("n=%d  c=%d\n",r[i].n,r[i].c);

    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        printf("Case %d: %d\n",i,r[n].n);
    }
}
