#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
