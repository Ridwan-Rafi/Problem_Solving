#include<bits/stdc++.h>
using namespace std;
int ar[30];
void z()
{
    for(int i=0;i<30;i++)ar[i]=0;
}
int main()
{
    int t,ln,cnt,n;
    string s;
    cin>>t;
    while(t--)
    {
        z();
        cnt=0;
        cin>>ln>>s;
        for(int i=0;i<ln;i++)
        {
            n=s[i]-'A';
            if(ar[n]==0)
            {
                cnt+=2;
                ar[n]=1;
            }
            else cnt++;
        }
        cout<<cnt<<endl;
    }
}
