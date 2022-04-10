#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string n1,n2;
    int ln1,ln2;
    cin>>t;
    while(t--)
    {
        int a=0,b=0,sum=0,carry=0;
        int ara1[222],ara2[222],suma[400];
        cin>>n1>>n2;
        ln1=n1.size();
        ln2=n2.size();
        int j=0;
        for(int i=ln1-1; i>=0; i--)
        {
            ara1[j++]=n1[i]-48;
        }
        j=0;
        for(int i=ln2-1; i>=0; i--)
            ara2[j++]=n2[i]-48;
        ln1=ln1-1;
        ln2=ln2-1;
       int i=0;
        while(ln1>=0 || ln2>=0)
        {
            if(ln1>=0)
            {
                a=ara1[ln1];
                ln1--;
            }
            else
            {
                a=0;
            }
            if(ln2>=0)
            {
                b=ara2[ln2];
                ln2--;
            }
            else b=0;

            sum=a+b+carry;
            suma[i++]=sum%10;
            carry=sum/10;
        }
        if(carry>0)
        {
            suma[i]=carry;
            i++;
        }
int flag=0;
        for(int j=0; j<i; j++)
        {
            if(suma[j]>0)
                flag=1;
            if(flag==1)
            cout<<suma[j];
            }
cout<<"\n";







    }
    return 0;
}
