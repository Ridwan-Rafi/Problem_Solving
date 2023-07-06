#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,cnt=0;
    cin>>n;
    int ar[n+5];

    for(int i=0;i<n;i++)cin>>ar[i];

    sort(ar,ar+n);

    int a,b,c;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])continue;
            for(int l=j+1;l<n;l++)
            {
                if(ar[j]==ar[l])continue;

                a=ar[i];
                b=ar[j];
                c=ar[l];
                if(a+b>c){
                        cnt++;
                        //cout<<a<<' '<<b<<' '<<c<<endl;
                }
            }
        }
    }

    cout<<cnt<<endl;
}
