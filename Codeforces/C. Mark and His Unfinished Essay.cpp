#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,q;
    string s;
    long long int r,l,k,sm,la[100],ra[100],nl,nr,in,ar[100];
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>q;
        cin>>s;
        ar[0]=n;
        la[0]=0;
        ra[0]=n;
        for(int i=0; i<c; i++)
        {
            cin>>l>>r;
            sm=(r-l)+1;
            ar[i+1]=ar[i]+sm;
            la[i+1]=l;
            ra[i+1]=r;
        }

        //for(int i=0;i<=c;i++)cout<<ar[i]<<' ';

        for(int i=0; i<q; i++)
        {
            cin>>k;
            if(k<=n)
            {
                cout<<s[k-1]<<endl;
            }
            else
            {
                while(k>n)
                {
                    in=upper_bound(ar,ar+c+1,k)-ar;
                    in--;
                    if(!binary_search(ar,ar+c+1,k))
                        in++;

                    //cout<<in<<endl;
                    l=la[in];
                    r=ra[in];
                    nl=ar[in-1]+1;
                    k=k-nl;
                    k+=l;
                }
                cout<<s[k-1]<<endl;
            }
        }
    }
}
