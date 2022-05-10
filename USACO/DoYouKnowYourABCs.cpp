#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7],ch[7];
    for(int i=0;i<7;i++)ch[i]=0;

    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+7);
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            for(int k=2;k<7;k++)
            {
                if(arr[i]+arr[j]==arr[k] && ch[k]==0)
                {
                    ch[k]=1;
                    break;
                }
            }
        }
    }
    cout<<arr[0];
    for(int i=1;i<7;i++)
    {
        if(ch[i]==0)
        {
            cout<<' '<<arr[i];
        }
    }
}
