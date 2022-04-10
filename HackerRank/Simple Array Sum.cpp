#include<bits/stdc++.h>
using namespace std;
int arraysum(int arr[],int siz)
{
    int sum=0;
    for(int i=0;i<siz;i++)
        sum=sum+arr[i];
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+5];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    cout<<arraysum(ar,n)<<endl;
    return 0;
}
