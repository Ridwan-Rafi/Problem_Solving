#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>bck,frd;
    string s,curr;
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        curr="http://www.lightoj.com/";
        while(!frd.empty())frd.pop();
        while(!bck.empty())bck.pop();

        printf("Case %d:\n",i);
        while(1)
        {
            cin>>s;
            if(s=="QUIT")break;
            else if(s=="BACK")
            {
                if(bck.empty())
                    printf("Ignored\n");
                else
                {
                    frd.push(curr);
                    curr=bck.top();
                    bck.pop();
                    cout<<curr<<endl;
                }
            }
            else if(s=="FORWARD")
            {
                if(frd.empty())
                    printf("Ignored\n");
                else
                {
                    bck.push(curr);
                    curr=frd.top();
                    frd.pop();
                    cout<<curr<<endl;
                }
            }
            else if(s=="VISIT")
            {
                cin>>s;
                bck.push(curr);
                curr=s;

                while(!frd.empty())
                    frd.pop();

                cout<<curr<<endl;
            }
        }
    }

}
