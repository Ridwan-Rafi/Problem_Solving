#include<bits/stdc++.h>
using namespace std;

struct point{
   long long int x,y;
}p1,p2,p3,p;

double area(point pp1, point pp2, point pp3)
{
    double are;
    are= (pp1.x*pp2.y)+(pp2.x*pp3.y)+(pp3.x*pp1.y) - (pp2.x*pp1.y) - (pp3.x*pp2.y) - (pp1.x*pp3.y);
     are= 0.5 *abs(are);

     return are;
}

int tri(point pp1, point pp2, point pp3, point pp)
{
    long long int totalArea,are1,are2,are3;

    totalArea= area(pp1,pp2,pp3);
    are1 = area(pp,pp1,pp2);
    are2 = area(pp,pp3,pp2);
    are3 = area(pp,pp1,pp3);

    if(totalArea == are1+are2+are3)
    {
        if(are1==0 || are2==0 || are3==0)
        {
            return 2;
        }
        else return 1;
    }

    return 0;
}


int main()
{
    int n,ans;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d%d%d%d%d",&p1.x,&p1.y,&p2.x,&p2.y,&p3.x,&p3.y,&p.x,&p.y);

        ans=tri(p1,p2,p3,p);

        if(ans==2)printf("Try Again…\n");
        else if(ans== 1)printf("Door Unlocked\n");
        else printf("GET OUT !!\n");
    }

    return 0;
}

