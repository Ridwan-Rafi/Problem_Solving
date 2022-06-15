#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[30],f=0,w=0,w1=0,i,j,ans;
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);

    i=0;j=n-1;
    w1=ar[j--];
  while(i<j)
        {
        if(w<w1)
        {
            f=1;
            w+=ar[i++];
        }
        else{
             f=0;
            w1+=ar[j--];
        }
    }

    cout<<abs(w1-w)<<endl;
}
