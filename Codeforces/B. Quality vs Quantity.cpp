#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n,arr[300011],i,j,f;
    long long int s,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=s=l=0;
        i=1;
        j=n-1;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        s=arr[0];
        while(i<j)
        {

            s+=arr[i];
            l+=arr[j];

            if(s<l){
                f=1;
                break;
            }
            i++;j--;
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
