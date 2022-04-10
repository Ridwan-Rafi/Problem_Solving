#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,ln,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>s;
        ln=s.size();
        int i;
        for( i=1;i<ln;i++)
        {
            cout<<i<<' '<<cnt<<endl;
            if(s[i-1]!=s[i])
            {
                cnt++;
            }
            else{
                i++;
            }
        }
        cout<<i<<' '<<cnt<<endl;
        /*if(i>ln-1){
                if(i-ln+1!=2)
            cnt+=(i-ln+1);
        }*/
        if(ln%2==1)
        cnt++;

        cout<<cnt<<endl;
    }
}
