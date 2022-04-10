#include<bits/stdc++.h>
using namespace std;

int arr[1000011],ar[1000011];
int main()
{
    int t,n,cnt;
    cin>>t;
    while(t--)
    {
        cnt=1;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ar[0]=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1]){
                ar[i]=ar[i-1]+1;
            }
            else ar[i]=ar[i-1];
        }

        for(int i=0;i<n;i++)cout<<ar[i]<<' ';
cout<<endl;
        cout<<ar[n-1]<<' ';
        for(int i=n-2;i>=0;i--)
        {
            cout<<ar[i]+cnt<<' ';
            cnt++;
        }
        cout<<endl;
    }
}
