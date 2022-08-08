#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[100011],in;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
        {
            in=0;
            ar[in]=1;
            in++;
            ar[in]=3;
            in++;
            for(int i=2;i<=n;i+=2)
            {
                ar[in]=i;
                in+=2;
            }
            in=3;
            for(int i=5;i<=n;i+=2)
            {
                ar[in]=i;
                in+=2;
            }
            for(int i=0;i<n;i++)
                printf("%d ",ar[i]);
            printf("\n");
        }
        else{
        in=0;
        for(int i=2;i<=n;i+=2){
            ar[in]=i;
            in+=2;
        }

            in=1;
        for(int i=1;i<=n;i+=2)
        {
            ar[in]=i;
            in+=2;
        }

        for(int i=0;i<n;i++)
            printf("%d ",ar[i]);
        printf("\n");
        }
    }
}
