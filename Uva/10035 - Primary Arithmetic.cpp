#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int ln1,ln2;
    while(cin>>a>>b)
    {
        int carry=0,sum=0,sum1=0,i,j,count=0;
        if(a[0]=='0' && b[0]=='0')break;
        ln1=a.size();
        ln2=b.size();
        ln1--;
        ln2--;
        while(1)
        {
            if(ln1<0 && ln2<0)break;
            //cout<<"ln1:"<<ln1<<" ln2:"<<ln2<<endl;
            i=a[ln1]-48;
            j=b[ln2]-48;
            if(ln1<0)
            {
                i=0;
            }
            if(ln2<0)
            {
                j=0;
            }

            sum1=carry+i+j;
            //cout<<"carry:"<<carry<<" i:"<<i<<" j:"<<j<<endl;
            if((sum1/10)>0)
            {
                sum=sum+(sum1%10);
                carry=sum1/10;
                count++;
            }
            else
            {
                sum=sum+(sum1%10);
                carry=sum1/10;
            }
            ln1--;
            ln2--;
        }
        if(count==0)
            cout<<"No carry operation."<<endl;
        else if(count==1)
        cout<<count<<" carry operation."<<endl;
        else
        cout<<count<<" carry operations."<<endl;
    }
    return 0;
}
