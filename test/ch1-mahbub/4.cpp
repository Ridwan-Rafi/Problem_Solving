#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,j,c=1,p;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        j=1;
        p=0;
        while(j<=i){
                p+=c;
                c++;
            j++;
        }
        sum=sum+p;
    }
    cout<<sum<<endl;
}

