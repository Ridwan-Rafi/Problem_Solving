#include<bits/stdc++.h>
using namespace std;
double ar[1000000];
int main()
{
    //freopen("input.txt","r",stdin);
    long long int n,i=0;

    while(cin>>n)
    {
        ar[i++]=sqrt(n);
    }
    for(int j=i-1;j>=0;j--)
        printf("%.4lf\n",ar[j]);
}
