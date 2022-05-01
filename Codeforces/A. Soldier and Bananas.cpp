#include<iostream>
using namespace std;
int main()
{
    int k,n,w,b;
    cin>>k>>n>>w;
    b=(w*(w+1))/2;
    b*=k;
    b=max(b-n,0);
    cout<<b<<endl;
}
