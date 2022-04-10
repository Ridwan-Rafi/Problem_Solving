#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,block,sum=0,carry=0,a[1000011];
    int arra1[1000011],arra2[1000011],indx=0;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        if(test>0)
            cout<<"\n";
        cin>>block;
        for(int i=0;i<block;i++)
        {
            cin>>arra1[i]>>arra2[i];
        }
        for(int i=block-1;i>=0;i--)
        {
            sum=arra1[i]+arra2[i]+carry;
            a[i]=sum%10;
            carry=sum/10;
        }
        for(int i=0;i<block;i++)
        {
            cout<<a[i];
        }
        cout<<"\n";
    }
    return 0;
}

