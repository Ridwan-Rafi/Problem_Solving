#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxm=0,count=0;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxm)
            maxm=arr[i];
    }
        for(int i=0;i<n;i++)
        {
            if(maxm==arr[i])count++;
        }
        cout<<count<<endl;
        return 0;
}
