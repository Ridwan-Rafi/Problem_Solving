#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n;
    long long int s;

    cin>>t;
    while(t--)
    {
        cin>>n;
        s=pow(2,n);
        cout<<s-1<<endl;
    }
}
