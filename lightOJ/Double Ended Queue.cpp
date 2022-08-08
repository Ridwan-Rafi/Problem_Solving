#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,sz,val,casee=1;
    deque<int> dq;
    string s;
    cin>>t;
    while(t--)
    {
        printf("Case %d:\n",casee);
        casee++;
        dq.clear();
        cin>>n>>m;
        sz=0;
        for(int i=1;i<=m;i++)
        {
            cin>>s;
            if(s=="pushLeft")
            {
                cin>>val;
                if(sz==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else{
                dq.push_front(val);
                sz++;
                cout<<"Pushed in left: "<<val<<endl;
                }
            }
            else if(s=="pushRight")
            {
                cin>>val;
                if(sz==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else{
                dq.push_back(val);
                sz++;
                cout<<"Pushed in right: "<<val<<endl;
                }
            }
            else if(s=="popLeft")
            {
                if(sz<=0)
                {
                    sz=0;
                    cout<<"The queue is empty"<<endl;
                }
                else{
                        sz--;
                    val=dq.front();
                    cout<<"Popped from left: "<<val<<endl;
                    dq.pop_front();
                }
            }
            else if(s=="popRight")
            {
                if(sz<=0)
                {
                    sz=0;
                    cout<<"The queue is empty"<<endl;
                }
                else{
                        sz--;
                        val=dq.back();
                    cout<<"Popped from right: "<<val<<endl;
                    dq.pop_back();
                }
            }
        }
    }
}
