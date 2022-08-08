#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ar[200111],m,mn,aa[200111],tt,ned,ac,baki;
    bool f;
    cin>>t;
    while(t--)
    {
        mn=m=ac=ned=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            aa[i]=ar[i];
        }

        if(n%2==0)
        {
            for(int i=1;i<n-1;i++){
                if(ar[i]>ar[i-1] && ar[i]>ar[i+1])ac++;
            }
            ned=ceil((float)n/3.0);
            if(ned<=ac)
                cout<<0<<endl;
            else{
                    baki=ned-ac;
            for(int i=1; i<n; i+=2)
            {
                f=0;
                if(baki!=0){
                if(ar[i]<=ar[i-1])
                {
                    tt=(ar[i-1]-ar[i])+1;
                    m=m+tt;
                    ar[i]+=tt;
                    f=1;
                }
                if(ar[i]<=ar[i+1])
                {
                    tt=(ar[i+1]-ar[i])+1;
                    m=m+tt;
                    ar[i]+=tt;
                    f=1;
                }
                }
                if(f==1)baki--;
            }

            baki=ned-ac;

            for(int i=n-2; i>=1; i-=2)
            {
                f=0;
                if(baki!=0){
                if(aa[i]<=aa[i-1])
                {
                    tt=(aa[i-1]-aa[i])+1;
                    mn=mn+tt;
                    aa[i]+=tt;
                }
                if(aa[i]<=aa[i+1])
                {
                    tt=(aa[i+1]-aa[i])+1;
                    mn=mn+tt;
                    aa[i]+=tt;
                }
                }

                if(f==1)baki--;
            }
            //cout<<mn<<' '<<m<<endl;
            cout<<min(m,mn)<<endl;
            }
        }
        else
        {
            for(int i=1;i<n-1;i++){
                if(ar[i]>ar[i-1] && ar[i]>ar[i+1])ac++;
            }
            ned=ceil((float)n/3.0);
            if(ned<=ac)
                cout<<0<<endl;
            else{
            for(int i=1; i<n; i+=2)
            {
                if(ar[i]<=ar[i-1])
                {
                    tt=(ar[i-1]-ar[i])+1;
                    m=m+tt;
                    ar[i]+=tt;
                }
                if(ar[i]<=ar[i+1])
                {
                    tt=(ar[i+1]-ar[i])+1;
                    m=m+tt;
                    ar[i]+=tt;
                }
            }
            cout<<m<<endl;
            }
        }
    }
}
