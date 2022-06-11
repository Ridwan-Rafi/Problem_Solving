#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[111],b[111],c[222];
    int t,m,n,k,i,j,l,kk,f;
    cin>>t;
    while(t--)
    {
        i=j=l=kk=0;
        f=1;
        cin>>n>>m>>k;
        cin>>a>>b;
        sort(a,a+n);
        sort(b,b+m);

        if(a[i]<b[j])f=0;

        while(n!=0 && m!=0)
        {
            if(a[i]>b[j])
            {
                if(f==1)
                {
                    c[l++]=b[j];
                    m--;
                    j++;
                    kk++;
                    if(kk==k || a[i]<b[j])
                    {
                        f=0;
                        kk=0;
                    }
                }
                else
                {
                    c[l++]=a[i];
                    n--;
                    i++;
                    kk++;
                    if(kk==k || a[i]>b[j])
                    {
                        f=1;
                        kk=0;
                    }
                }


            }
            else if(a[i]<b[j])
            {
                if(f==0)
                {
                    c[l++]=a[i];
                    n--;
                    i++;
                    kk++;
                    if(kk==k || a[i]>b[j])
                    {
                        f=1;
                        kk=0;
                    }
                }
                else
                {
                    c[l++]=b[j];
                    m--;
                    j++;
                    kk++;
                    if(kk==k || a[i]<b[j])
                    {
                        f=0;
                        kk=0;
                    }
                }
            }
            else
            {
                if(n>m)
                {
                    if(f==1)
                    {
                        c[l++]=b[j];
                        m--;
                        j++;
                        kk++;
                        if(kk==k || a[i]<b[j])
                        {
                            f=0;
                            kk=0;
                        }
                    }
                    else
                    {
                        c[l++]=a[i];
                        n--;
                        i++;
                        kk++;
                        if(kk==k || a[i]>b[j])
                        {
                            f=1;
                            kk=0;
                        }
                    }
                }
                else
                {
                    if(f==0)
                    {
                        c[l++]=a[i];
                        n--;
                        i++;
                        kk++;
                        if(kk==k || a[i]>b[j])
                        {
                            f=1;
                            kk=0;
                        }
                    }
                    else
                    {
                        c[l++]=b[j];
                        m--;
                        j++;
                        kk++;
                        if(kk==k || a[i]<b[j])
                        {
                            f=0;
                            kk=0;
                        }
                    }
                }
            }
        }
        c[l]='\0';
        cout<<c<<endl;
    }
}
