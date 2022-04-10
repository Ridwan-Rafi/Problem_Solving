#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,countt,temp;
    cin>>t;
    while(t--)
    {
        cin>>l;
        int bogi[l+5];
        for(int i=0;i<l;i++)
        {
            cin>>bogi[i];
        }
        countt=0;
        for(int i=0;i<l;i++)
        {
            for(int j=i;j<l;j++)
            {
                if(bogi[i]>bogi[j])
                {
                    temp=bogi[i];
                    bogi[i]=bogi[j];
                    bogi[j]=temp;
                    countt++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<countt<<" swaps."<<endl;
    }
    return 0;
}
