#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t, n,arr[100],mn;
    long long int sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        mn=111111111;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mn=min(mn,arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>mn)
            {
                sum+=(arr[i]-mn);
            }
        }
        cout<<sum<<endl;
    }
}
