#include<bits/stdc++.h>
using namespace std;

#define PI 2*acos(0.0)

int main()
{
    int t;
    double r1,r2,r3,art,a,b,c,s,ss,A,B,C,aA,aB,aC,da,db,dc,bk1,bk2,bk3,ar;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;
        s=0.5*(a+b+c);
        ss=s*(s-a)*(s-b)*(s-c);
        art=sqrt(ss);

//printf("art %lf\n",art);

        A=((a*a)+(b*b)-(c*c))/(2.0*a*b);
        B=((c*c)+(b*b)-(a*a))/(2.0*b*c);
        C=((a*a)+(c*c)-(b*b))/(2.0*a*c);

//printf("<A %lf <B %lf <C %lf pi %lf\n",A,B,C,PI);
        da=acos(A);//*180.0);
        db=acos(B);//*180.0);
        dc=acos(C);//*180.0);


        bk1=r1*r1*da*0.5;
        bk2=r2*r2*dc*0.5;
        bk3=r3*r3*db*0.5;



        ar=art-(bk1+bk2+bk3);
        printf("Case %d: %.10lf\n",i,ar);
    }
}
