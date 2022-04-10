#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    double dst;
    cout<<"X1= ";cin>>x1;
    cout<<"Y1= ";cin>>y1;
    cout<<"X2= ";cin>>x2;
    cout<<"Y2= ";cin>>y2;
    dst=pow(x2-x1,2)+pow(y2-y1,2);
    dst=sqrt(dst);
    cout<<"Distance = "<<dst;
}
