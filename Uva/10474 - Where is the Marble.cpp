#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,cnt=1;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)break;
        int num[n+3],qur[q+3],key;
        for(int i=0; i<n; i++)
            cin>>num[i];
        sort(num,num+n);
        for(int i=0; i<q; i++)
            cin>>qur[i];
        cout<<"CASE# "<<cnt++<<":"<<endl;
        for(int i=0; i<q; i++)
        {
            int low=0,high=n-1,mid,flag=0;
            key=qur[i];
            while(low<=high)
            {
                mid=(low+high)/2;
                if(num[mid]>key)
                    high=mid-1;
                else if(num[mid]<key)
                    low=mid+1;
                else if(num[mid]==key)
                {
                    flag=1;
                    high=mid-1;
                }
            }
            if(flag==1)
            {
                cout<<key<<" found at "<<high+2<<endl;
            }
            else
            {
                cout<<key<<" not found"<<endl;
            }
        }
    }
    return 0;
}
