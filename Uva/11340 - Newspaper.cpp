#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,senl,price[111],ln,pay[111];
    string let,sen;

    cin>>t;
    while(t--)
    {
         for(int i=0;i<111;i++)
        pay[i]=0;

        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>let[i]>>price[i];
        }
        cin>>senl;
        getchar();
        for(int i=0;i<senl;i++)
        {
            getline(cin,sen);
            ln=sen.length();
            for(int j=0;j<n;j++)
            {
                for(int k=j;k<ln;k++)
                {
                    if(let[j]==sen[k])
                        pay[j]=pay[j]+price[j];
                }
                cout<<let[j]<<pay[j]<<endl;
            }
            cout<<sen<<endl;

        }
        int sum=0;
for(int i=0;i<111;i++)
        sum=sum+pay[i];
cout<<sum <<endl;
    }
    return 0;
}
