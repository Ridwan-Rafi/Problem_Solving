#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[200111],j,in;
    map<int,int>m;
    cin>>t;
    while(t--)
    {
        in=0;
        m.clear();
        cin>>n;
        //ar[in++]=n;
        for(int i=n; i>=1; i--)
        {
            j=i;
            if(j%2==1 && m[j]==0){
                    ar[in++]=j;
                    m[j]=1;
            }
            else if(m[j]==0)
            {
                while(j%2==0)
                {
                    ar[in]=j;
                    m[j]=1;
                    j=j/2;
                    in++;
                    if(j%2==1 && m[j]==0)
                    {
                        ar[in++]=j;
                    m[j]=1;
                    }
                }
            }
        }
        printf("2\n");
        for(int i=n-1;i>=0;i--)
        printf("%d ",ar[i]);
        cout<<endl;
    }
}
