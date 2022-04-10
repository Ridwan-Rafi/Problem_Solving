#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,mark[1005];
    double avg,ab;
    cin>>t;
    while(t--)
    {
        int sum=0,above=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>mark[i];
            sum+=mark[i];
        }
        avg=sum/n;

        for(int i=0;i<n;i++)
        {
            if(mark[i]>avg)
            {
                above++;
            }
        }

        ab=(float)(above*100)/n;
       printf("%.3f%%\n",ab);
    }
    return 0;
}
