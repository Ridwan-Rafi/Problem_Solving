    #include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ar[1111],cnt,pre;
    long long int sum,asum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=asum=cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        pre=ar[0];
        for(int i=0;i<n;i++)
        {
            if(ar[i]==pre)
            {
                cnt++;
            }
            else{
                asum+=(cnt+pre);
                pre=ar[i];
                cnt=1;
            }
            //cout<<cnt<<' '<<pre<<' '<<asum<<endl;
        }
        asum+=(cnt+pre);

       // cout<<sum<<' '<<asum<<endl;
        if(sum==asum)
        {
            printf("%lld amazing sequences\n",asum);
        }
        else printf("%lld not amazing sequences\n",asum);
    }
}
