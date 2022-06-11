#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[200022];
    int t,n,k,a[200022],cnt,ln,mxb,mn,wh,mnw;
    cin>>t;
    while(t--)
    {
        mxb=-1;
        cnt=1;
        ln=wh=0;
        mnw=1000000001;
        cin>>n>>k;
        for(int i=0; i<n; i++)cin>>s[i];

        for(int i=0; i<n-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                a[ln++]=cnt;
                cnt=1;
            }
            else
                cnt++;
        }
        a[ln++]=cnt;

        //for(int i=0;i<ln;i++)
            //cout<<a[i]<<' ';
        //cout<<endl;

        if(s[0]=='B')
            {
                for(int i=0;i<ln;i+=2)
                {
                    cnt=0;
                    for(int j=i;j<ln;j++)
                    {
                        if(j%2==0)
                        {
                            cnt+=a[j];
                        }
                        else{
                            if(cnt+a[j]>k)
                            {
                                wh+=(k-cnt);
                            }
                            else
                            wh+=a[j];
                        cnt+=a[j];
                        //    printf("wh %d\n",wh);
                        }

                        if(cnt>=k)
                        {
                            cnt=0;
                            mnw=min(mnw,wh);
                            wh=0;
                      //      cout<<"55"<<endl;
                            break;
                        }
                    }
                    //cout<<mnw<<endl;
                }
                cout<<mnw<<endl;
            }
            else{
                for(int i=0;i<ln;i++)
                {
                    cnt=0;
                    for(int j=i;j<ln;j++)
                    {
                        if(j%2==1)
                        {
                            cnt+=a[j];
                        }
                        else{
                            if(cnt+a[j]>k)
                            {
                                wh+=(k-cnt);
                            }
                            else
                            wh+=a[j];
                        cnt+=a[j];
                          //  printf("wh %d\n",wh);
                        }

                        if(cnt>=k)
                        {
                            cnt=0;
                            mnw=min(mnw,wh);
                            wh=0;
                            //cout<<"94"<<endl;
                            break;
                        }
                    }
                    //cout<<mnw<<endl;
                    if(i%2==1)i++;
                }
                cout<<mnw<<endl;
            }

        //for(int i=0; i<ln; i++)cout<<a[i]<<' ';
        //cout<<endl<<mxb;
    }
}
