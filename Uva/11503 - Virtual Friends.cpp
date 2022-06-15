#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    string s,s1;
    int t,n,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s>>s1;
            if(m[s]==0){
                cnt++;
                m[s]++;
            }
            if(m[s1]==0){
                cnt++;
                m[s1]++;
            }
            cout<<cnt<<endl;
        }
    }

    return 0;
}
