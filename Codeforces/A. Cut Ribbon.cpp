#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ar[5],n,cnt=0;
    cin>>n>>ar[0]>>ar[1]>>ar[2];
    sort(ar,ar+3);
    if(n%ar[0]==0)
    {
        cnt=n/ar[0];
    }
    else{
        t=n%ar[0];

    }
}
