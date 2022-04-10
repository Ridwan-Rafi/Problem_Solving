#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,p=0,z=0,arr;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr;
        if(arr>0)
            p++;
        else if(arr<0)
            m++;
        else if(arr==0)
            z++;
    }
    printf("%.6f\n",(float)p/n);
    printf("%.6f\n",(float)m/n);
    printf("%.6f\n",(float)z/n);
}
