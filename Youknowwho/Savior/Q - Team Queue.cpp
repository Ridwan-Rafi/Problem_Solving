#include<bits/stdc++.h>
using namespace std;
int main()
{
   // ios_base::sync_with_stdio(false);
   // cin.tie(0);
   // freopen("output.txt","w",stdout);
    int t,casee=1;
    while(cin>>t && t!=0)
    {
        cout<<"Scenario #"<<casee++<<'\n';
        int t1,t2,val,tNo,th;
        int tth[t+4],pos[t+4];
        map<int,int>team,pno;

        for(int i=0;i<t;i++)
        {
            tth[i]=0;
            pos[i]=1;
            cin>>t1;
            for(int j=0;j<t1;j++){
                cin>>val;
                team[val]=i;
            }
        }

        string s;
        priority_queue<tuple<int,int,int,int>>person; //current position, serial no, number,teamNo
        int currentPos=0,cpos;
        while(cin>>s && s!="STOP")
        {
            if(s=="ENQUEUE"){
                cin>>val;
                tNo=team[val];
                th=tth[tNo];
                tth[tNo]--;
                cpos=pos[tNo];
                if(cpos==1 || pno[tNo]==0)
                {
                    cpos=pos[tNo]=currentPos;
                    currentPos--;
                }
                pno[tNo]++;
                person.push({cpos,th,val,tNo});
            }
            else if(s=="DEQUEUE")
            {
                auto [cpos,th,val,tNo]=person.top();
                cout<<val<<'\n';
                pno[tNo]--;
                person.pop();
            }
        }
        cout<<'\n';
    }
    return 0;
}
